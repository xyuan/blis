/*

   BLIS    
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2014, The University of Texas at Austin

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    - Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    - Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    - Neither the name of The University of Texas at Austin nor the names
      of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef BLIS_GKS_H
#define BLIS_GKS_H

arch_t  bli_arch_query_id( void );

// -----------------------------------------------------------------------------

void    bli_gks_init( void );
void    bli_gks_finalize( void );

void    bli_gks_init_index( void );

cntx_t* bli_gks_lookup_nat_cntx( arch_t id );
cntx_t* bli_gks_lookup_ind_cntx( arch_t id, ind_t ind );
void    bli_gks_register_cntx( arch_t id, void* nat_fp, void* ref_fp, void* ind_fp );

cntx_t* bli_gks_query_cntx( void );
cntx_t* bli_gks_query_nat_cntx( void );
cntx_t* bli_gks_query_cntx_noinit( void );
cntx_t* bli_gks_query_ind_cntx( ind_t ind, num_t dt );

void    bli_gks_init_ref_cntx( cntx_t* cntx );

bool_t  bli_gks_cntx_l3_nat_ukr_is_ref( num_t dt, l3ukr_t ukr_id, cntx_t* cntx );

char*   bli_gks_l3_ukr_impl_string( l3ukr_t ukr, ind_t method, num_t dt );
kimpl_t bli_gks_l3_ukr_impl_type( l3ukr_t ukr, ind_t method, num_t dt );

//char*   bli_gks_l3_ukr_avail_impl_string( l3ukr_t ukr, num_t dt );


#endif

