/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76428
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_6))));
        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (4294967274U)))), (3003536719759973664ULL))))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
        {
            var_16 -= ((/* implicit */unsigned char) 18446744073709551585ULL);
            var_17 = ((/* implicit */long long int) min((((short) 4294967274U)), (((/* implicit */short) (signed char)127))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
        {
            var_18 &= var_1;
            var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) arr_4 [i_0] [i_2] [i_2])) | (var_4)))));
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) 4294967274U);
                        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_22 = ((/* implicit */signed char) ((arr_7 [i_0] [i_0] [i_0] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))));
        }
        for (signed char i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 2; i_6 < 9; i_6 += 3) 
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3833560920U)))) ? (((((/* implicit */_Bool) arr_5 [i_6] [i_5] [i_0])) ? (((/* implicit */unsigned long long int) arr_5 [i_5] [i_5] [i_6 - 2])) : (13411138970664023734ULL))) : (((((/* implicit */unsigned long long int) arr_7 [i_0] [i_5] [i_5] [i_6])) + (42ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_6 + 1] [i_6 + 1] [i_6])) >= (((/* implicit */int) var_11))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) <= (arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (long long int i_7 = 4; i_7 < 9; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            arr_20 [i_0] [i_5] [i_6] [i_7 - 4] [i_0] [i_5] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)23048)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) 2015699252U)))))) : (((3003536719759973646ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78)))))));
                            var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) + (((/* implicit */int) (!((_Bool)0))))))));
                        }
                    } 
                } 
            }
            var_25 = ((/* implicit */long long int) (!((_Bool)1)));
        }
        for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) 2441996012U)) | (18446744073709551598ULL))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                var_27 = ((/* implicit */short) ((((_Bool) (_Bool)1)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (18446744073709551615ULL)));
                /* LoopNest 2 */
                for (signed char i_11 = 1; i_11 < 9; i_11 += 4) 
                {
                    for (short i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        {
                            arr_32 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */signed char) (~(arr_7 [i_9] [i_9] [i_9] [i_9])));
                            var_28 = (((~(((/* implicit */int) var_7)))) <= (((/* implicit */int) (_Bool)1)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 288230376151711743ULL))))))))));
                            arr_39 [i_0] [i_0] [i_0] [i_0] [4ULL] [i_0] [(short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_27 [i_0] [i_9] [i_13] [i_13] [i_14 + 1] [i_13]))));
                            var_30 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            var_31 = ((/* implicit */unsigned short) arr_30 [i_0] [i_9]);
                            var_32 = ((((arr_38 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (+(arr_5 [i_0] [i_10] [i_14 + 1])))));
                        }
                    } 
                } 
                var_33 -= ((/* implicit */short) 3804306030U);
            }
        }
    }
    var_34 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_15 = 1; i_15 < 20; i_15 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            for (unsigned char i_17 = 0; i_17 < 22; i_17 += 3) 
            {
                {
                    var_35 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_43 [i_15 + 1] [i_16] [i_16]))));
                    var_36 = ((/* implicit */_Bool) ((short) var_8));
                }
            } 
        } 
        var_37 = ((((/* implicit */_Bool) 21LL)) ? (arr_44 [i_15]) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
    }
}
