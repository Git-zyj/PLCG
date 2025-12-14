/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62832
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((+(((var_11) * (((/* implicit */unsigned long long int) 2147483647LL)))))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_4))))))))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(var_11)))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */unsigned char) ((_Bool) min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1]))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = 8405385460805073105LL;
                    var_17 = ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */_Bool) (unsigned short)34408)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_1)))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 2; i_4 < 21; i_4 += 3) 
                    {
                        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned char) (!(var_13)))), (var_2)))) / (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-117))))));
                        var_19 &= ((/* implicit */int) ((unsigned char) min((arr_2 [i_0 - 2]), (((/* implicit */short) (unsigned char)255)))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) 63U))));
                        arr_12 [i_0] [i_0] [i_3] [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) / ((((_Bool)1) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    for (long long int i_5 = 3; i_5 < 20; i_5 += 1) 
                    {
                        var_21 -= ((/* implicit */unsigned short) min((arr_6 [i_0] [i_0]), (((/* implicit */long long int) ((signed char) arr_13 [i_5 - 3] [i_5 + 2] [i_5] [i_5 - 3])))));
                        var_22 = ((/* implicit */unsigned int) (((((_Bool)1) ? (-8405385460805073113LL) : (8405385460805073112LL))) >= (((/* implicit */long long int) -1746300802))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_0 + 1]))) : (arr_13 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0])))) ? (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_3] [i_3]))) : (arr_6 [i_5 - 3] [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) min(((short)29298), (((/* implicit */short) arr_8 [i_1] [i_1] [i_1])))))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        var_24 = ((/* implicit */long long int) ((((((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1]))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_5 + 2] [i_3])) ? (((/* implicit */int) arr_11 [i_0] [11] [i_5 + 1] [i_3])) : (((/* implicit */int) (unsigned short)55848)))))));
                        var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (((_Bool)1) ? (-8405385460805073114LL) : (((/* implicit */long long int) 2147483647))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 3859471966U)) ? (-1166633018) : (((/* implicit */int) (short)-512)))))), (((((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_12)))) / ((-(((/* implicit */int) var_12))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 1; i_6 < 20; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_8))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_3] [i_3] [i_6])) + (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_3] [i_3]))))) / (((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                        var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) var_13))));
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0])))))));
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_3] [(_Bool)0]))));
                    }
                    var_31 += ((/* implicit */long long int) arr_0 [i_1]);
                    var_32 = ((/* implicit */unsigned char) max((((((/* implicit */int) (!(((/* implicit */_Bool) 15U))))) & (((/* implicit */int) ((_Bool) (_Bool)1))))), (((/* implicit */int) (unsigned short)65526))));
                    arr_19 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) arr_0 [i_0 - 1]);
                }
            }
        } 
    } 
}
