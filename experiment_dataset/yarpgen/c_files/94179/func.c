/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94179
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_9 [i_0] [i_2] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_12))));
                    arr_10 [i_0] [i_1] [9LL] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_1] [i_0])))));
                }
                arr_11 [(short)21] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_5 [i_0])) : (((long long int) arr_4 [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_5))) != (((/* implicit */int) ((short) var_4)))))), (var_9)));
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (long long int i_5 = 3; i_5 < 12; i_5 += 2) 
            {
                {
                    arr_22 [(short)8] [i_4] [i_4] [i_5] &= (~(min((((/* implicit */long long int) var_12)), (max((arr_16 [i_3] [i_4] [(short)8]), (((/* implicit */long long int) var_10)))))));
                    /* LoopSeq 2 */
                    for (short i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (+((~((+(((/* implicit */int) var_10)))))))))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (max((arr_23 [i_3] [i_5] [i_5] [i_6]), (((/* implicit */long long int) var_4))))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (short)26398))) : (-2923549298271951471LL))) : (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) (short)-28030))))))));
                        var_16 = ((/* implicit */unsigned char) arr_6 [i_5 + 1] [i_5 - 1] [i_5 + 3] [i_5 - 3]);
                    }
                    for (int i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        arr_27 [i_3] [i_4] [i_5] [i_5] [i_7] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_3 [11] [11] [11]))))), (((((/* implicit */_Bool) (short)26398)) ? (9223372036854775807LL) : (((/* implicit */long long int) 4095))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)21108)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) max((arr_25 [i_7 - 1] [i_7 - 1] [i_5] [5] [i_4] [i_4]), (((/* implicit */int) var_4))))) : (min((((/* implicit */long long int) arr_15 [i_7 + 1])), (var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_3] [11LL] [i_5 + 2] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_2 [(unsigned char)4] [(unsigned char)4]))) > (max((var_0), (((/* implicit */long long int) var_10)))))))));
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-16384))));
                        arr_28 [i_5] [i_5] [i_4] [i_5] = (~(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))))), (min((var_5), (var_3)))))));
                        var_18 = ((/* implicit */long long int) min((((int) var_10)), (arr_5 [i_3])));
                    }
                }
            } 
        } 
        arr_29 [i_3] = ((/* implicit */short) var_9);
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            arr_33 [i_3] [i_3] [5LL] = ((/* implicit */short) max((((/* implicit */long long int) (-(max((((/* implicit */int) arr_12 [i_3])), (arr_1 [i_3] [i_3])))))), (((((/* implicit */_Bool) (short)26398)) ? (134217727LL) : (-9128290468300315375LL)))));
            arr_34 [i_8] [10] = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */short) var_8)), ((short)2)))) ? (((/* implicit */int) (short)32737)) : (((/* implicit */int) ((((/* implicit */_Bool) -134217728LL)) && (((/* implicit */_Bool) var_12))))))), (((/* implicit */int) (short)(-32767 - 1)))));
        }
    }
    var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((var_7), (((/* implicit */short) var_9))))), (var_2)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) (short)21108))))) : (((/* implicit */int) var_12))))));
}
