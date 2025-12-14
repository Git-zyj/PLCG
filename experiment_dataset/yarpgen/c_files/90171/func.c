/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90171
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
    var_10 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)38042))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = arr_1 [i_0] [13LL];
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */_Bool) var_8);
                        var_12 = ((/* implicit */_Bool) var_3);
                        var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (((((/* implicit */_Bool) (unsigned short)3584)) ? (arr_8 [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_0 [i_3]))))));
                        var_14 &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) arr_9 [i_0] [i_1] [i_1] [i_2] [i_3])))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            var_15 = (signed char)17;
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])) << (((arr_7 [i_0] [i_1] [2U] [i_0]) - (4193446079386755270LL)))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4266071853128869586ULL))) : (((/* implicit */unsigned long long int) 211871465))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_3] [i_4])) ^ ((-(((/* implicit */int) var_5))))));
                            var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [(unsigned char)16] [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_1]))));
                            arr_16 [i_1] [i_3] [i_2] [i_2] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(signed char)17] [i_3])) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))));
                        }
                    }
                } 
            } 
            arr_17 [i_0] [(unsigned char)10] [i_1] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_8 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39885)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1])));
            var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 3981263239U)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)122)))) << (((((((/* implicit */int) (signed char)-100)) & (((/* implicit */int) var_6)))) - (123)))));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_11 [i_5] [i_1] [i_1] [i_1])) + (2147483647))) >> (((arr_0 [i_5]) - (2780935706U))))))));
                var_21 = ((/* implicit */signed char) arr_8 [i_0] [i_0]);
                var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (arr_8 [i_0] [i_0]) : (arr_8 [i_0] [i_0])));
                var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_20 [i_0] [(unsigned short)15] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 16; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        {
                            var_24 = ((_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_11 [i_1] [i_5] [(signed char)0] [i_7]))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_6 + 3] [i_6 + 2] [i_6 + 3])) << (((((/* implicit */int) (short)6052)) - (6047)))));
                            var_26 = ((/* implicit */unsigned long long int) ((arr_25 [i_6 + 2] [i_7] [i_7] [i_7] [i_7] [i_7]) % (((/* implicit */int) ((short) -6663278911610791874LL)))));
                            var_27 = (!(((/* implicit */_Bool) (unsigned short)51376)));
                        }
                    } 
                } 
            }
            arr_26 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] [i_1])) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])));
        }
        var_28 *= ((/* implicit */unsigned long long int) (signed char)0);
    }
    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 18; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_8] [18]))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_8] [i_8] [i_10] [13LL] [i_10])) ? (arr_28 [i_8]) : (((/* implicit */int) (signed char)-17))))))) >> (((min((((((/* implicit */int) (signed char)127)) / (arr_28 [i_8]))), (var_7))) + (865508086))))))));
                    arr_36 [(unsigned char)14] [i_9] [i_10] [i_10] = ((/* implicit */short) ((((arr_25 [i_9 - 3] [i_9 - 1] [i_9 + 1] [i_9 - 2] [i_9 - 3] [i_9 - 1]) << (((arr_32 [i_9 - 3] [i_9 - 1] [i_9 + 1]) - (7094986154896267001ULL))))) >> (((((/* implicit */int) min((((/* implicit */short) var_6)), (arr_23 [i_9 - 3] [i_9 - 3] [i_9 - 3] [i_9 - 2] [i_9 - 2])))) - (172)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 17; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                {
                    var_30 = ((/* implicit */long long int) ((unsigned char) ((((var_0) >= (((/* implicit */unsigned long long int) arr_25 [i_8] [i_8] [3] [i_11] [i_11] [i_12])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)0)), (arr_27 [i_8] [i_8])))) : (var_0))));
                    arr_42 [i_8] [i_8] = ((/* implicit */unsigned long long int) (short)-32750);
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((arr_8 [i_11 + 1] [i_12]) - (((/* implicit */unsigned long long int) ((long long int) 4095))))))));
                }
            } 
        } 
    }
    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) /* same iter space */
    {
        var_32 ^= ((((((/* implicit */int) arr_35 [i_13] [i_13] [i_13] [i_13])) != ((+(((/* implicit */int) arr_35 [i_13] [i_13] [i_13] [12])))))) ? (((/* implicit */int) ((short) (signed char)-1))) : (min((((/* implicit */int) ((short) 4937464539435511337LL))), ((-(((/* implicit */int) arr_24 [i_13] [(_Bool)1] [i_13] [13ULL])))))));
        var_33 = ((/* implicit */unsigned long long int) (-(max((arr_7 [i_13] [i_13] [i_13] [i_13]), (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))))))));
    }
}
