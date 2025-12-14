/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72847
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
    var_14 = ((/* implicit */short) var_3);
    var_15 += ((/* implicit */unsigned int) (signed char)85);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_16 |= (_Bool)0;
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_17 -= max((((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_3 [i_0] [i_1] [i_2])))) ^ (((/* implicit */int) (unsigned short)51501))))), ((~(min((arr_4 [2ULL] [2ULL] [2ULL]), (((/* implicit */long long int) var_4)))))));
                        var_18 = (_Bool)1;
                    }
                } 
            } 
            arr_11 [i_0] [i_1] = ((/* implicit */signed char) (!((_Bool)1)));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_2 [i_0] [i_1]))))))))))))));
                var_20 = ((/* implicit */signed char) min((((unsigned long long int) ((((/* implicit */int) (signed char)-7)) / (((/* implicit */int) (signed char)-7))))), (((/* implicit */unsigned long long int) (_Bool)0))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_4]))));
            }
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_22 *= ((/* implicit */int) (_Bool)1);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_6 = 2; i_6 < 17; i_6 += 2) 
            {
                /* LoopSeq 3 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_23 += ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_2 [i_6 - 2] [i_6 + 2])) : (((/* implicit */int) (_Bool)1)));
                    var_24 -= ((/* implicit */unsigned long long int) arr_18 [i_7] [i_7] [(signed char)0] [i_7]);
                    var_25 = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_5] [i_0]);
                    arr_22 [(signed char)3] [i_5] [(unsigned short)2] = ((/* implicit */unsigned short) arr_5 [i_0]);
                    var_26 = ((/* implicit */signed char) (unsigned short)16383);
                }
                for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) (-(((unsigned long long int) (unsigned short)14034))));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((((/* implicit */int) (signed char)-85)) + (2147483647))) >> (((((/* implicit */int) arr_16 [i_6 + 2] [(_Bool)1] [i_6])) - (46090))))))));
                    }
                    for (long long int i_10 = 1; i_10 < 18; i_10 += 4) 
                    {
                        arr_31 [(_Bool)1] [i_5] [i_6] [i_5] [4U] = ((/* implicit */unsigned short) (-((~(arr_5 [i_6])))));
                        var_29 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-93))));
                    }
                    var_30 = ((/* implicit */_Bool) 0ULL);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_7 [i_5] [i_5] [i_11]))) <= (arr_20 [i_6 - 2] [i_6 + 2] [i_5] [i_6 + 2])));
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((arr_9 [i_6 + 3] [i_6 - 1] [i_6 + 3]) * (4221576435U))))));
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) 108086391056891904LL))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_36 [i_5] [i_5] [(signed char)19] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))) <= (arr_35 [i_6 + 3] [i_5] [i_5] [i_0] [i_0])));
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((unsigned long long int) arr_9 [i_6 - 2] [i_6 + 2] [i_6 + 1])))));
                    }
                    for (int i_13 = 4; i_13 < 18; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (signed char)127))));
                        var_36 = ((/* implicit */signed char) ((732811704) >= (((/* implicit */int) arr_25 [i_13 - 1] [(signed char)12] [i_13 - 2] [i_13] [i_13 - 4]))));
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_13 + 2] [i_6 - 2] [i_13 + 2])) ? (((((-2522250096435382098LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)32767)) - (32748))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [19U] [5U] [i_0] [i_5])) ? (((/* implicit */int) (short)-26875)) : (((/* implicit */int) (signed char)-115)))))));
                    }
                }
                for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    arr_42 [(unsigned short)2] [i_5] = ((/* implicit */unsigned short) 15723756325547537274ULL);
                    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_0])) ? (((/* implicit */int) arr_27 [13] [i_5] [i_6 + 3] [i_6 + 3] [i_5] [i_5] [i_6])) : (((/* implicit */int) (signed char)92)))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_15 = 1; i_15 < 19; i_15 += 1) 
                {
                    var_39 = ((/* implicit */signed char) arr_3 [i_0] [i_15 + 1] [i_6 + 2]);
                    arr_45 [18ULL] [18ULL] [i_6] [i_5] = ((/* implicit */_Bool) ((arr_35 [i_6 - 2] [i_6 - 2] [i_5] [i_6] [i_6 - 2]) + (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_5] [i_6 - 2] [i_15])))))));
                }
            }
        }
        var_40 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_6 [i_0] [i_0])), (108086391056891904LL)));
    }
}
