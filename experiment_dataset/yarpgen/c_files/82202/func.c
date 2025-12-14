/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82202
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
    var_14 ^= min((var_1), (var_10));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (var_8) : (var_8)));
                        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (950807779) : (arr_6 [i_1] [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9002))) : (var_2)))));
                        var_17 *= ((/* implicit */short) arr_5 [i_0] [i_1] [i_2]);
                        arr_11 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (~(arr_8 [i_3] [i_2] [i_1] [i_1] [i_0])));
                    }
                    for (short i_4 = 3; i_4 < 14; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2] [i_4 + 1] [i_2]))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */short) min(((~(((((/* implicit */int) (short)-2361)) & (-950807780))))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
                        var_19 = ((/* implicit */short) (~(min((((((/* implicit */_Bool) (short)7750)) ? (((/* implicit */unsigned long long int) 950807769)) : (6760191169772445177ULL))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_4 + 2] [i_4]))))));
                    }
                    for (short i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                        {
                            arr_20 [i_6] [i_5] [i_5] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned short) arr_13 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6]))), (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) -950807766))))));
                            arr_21 [i_6] [i_5] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2] [i_5] [i_6])) ? (((/* implicit */long long int) 950807796)) : (arr_1 [i_0]))))));
                            arr_22 [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0]);
                            var_20 -= ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_17 [i_1] [i_1] [i_2] [i_5])) == (((/* implicit */int) arr_17 [i_0] [i_2] [i_5] [i_6])))));
                            arr_23 [i_5] [i_1] [i_5] [i_5] [i_6] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (4095) : (((/* implicit */int) (short)-4576))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_7)) : (arr_8 [i_0] [i_1] [i_2] [i_5] [i_6])))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)15383)) ? (((/* implicit */int) ((625279972) > (((/* implicit */int) (unsigned char)255))))) : (((/* implicit */int) ((short) arr_19 [i_0] [i_1] [i_2] [i_5] [i_7])))));
                            arr_27 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((var_2) / (((long long int) arr_15 [i_2] [i_1] [i_2] [i_1]))));
                            arr_28 [i_0] [i_1] [i_2] [i_5] [i_7] = ((/* implicit */long long int) ((((arr_6 [i_5] [i_2] [i_1]) >> (((arr_3 [i_5]) + (2619538571352361829LL))))) & (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            arr_29 [i_7] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (+(var_7)));
                        }
                        arr_30 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((short) (short)9001));
                        var_22 = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                    }
                    for (short i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                    {
                        var_23 &= (-((-(((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_2] [i_8])) ? (((/* implicit */long long int) var_7)) : (arr_8 [i_0] [i_0] [i_1] [i_2] [i_8]))))));
                        arr_33 [i_8] [i_0] [i_2] [i_8] [i_0] [i_8] = ((/* implicit */unsigned char) (short)15368);
                        arr_34 [i_2] = ((/* implicit */_Bool) (short)-8988);
                        arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2])) || (((/* implicit */_Bool) var_0))))) * ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))))));
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */int) (short)-26713)) < (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_4))))), (arr_5 [i_0] [i_0] [i_0]))))));
                            var_25 = ((/* implicit */int) (short)-15383);
                            arr_38 [i_1] [i_2] [i_8] = ((/* implicit */unsigned char) var_3);
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_7 [i_0] [i_1] [i_8] [i_9]), (arr_7 [i_0] [i_1] [i_2] [i_9])))))))));
                        }
                    }
                    var_27 += ((/* implicit */short) (~(950807769)));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */short) var_12);
    var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) var_10)))) : (min((((((/* implicit */int) (unsigned short)22478)) % (((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */int) var_4)) == (var_8)))))));
}
