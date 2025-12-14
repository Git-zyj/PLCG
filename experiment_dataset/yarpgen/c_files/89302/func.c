/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89302
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
    var_14 = ((/* implicit */unsigned int) var_0);
    var_15 = ((/* implicit */unsigned char) (~(max(((+(536870911LL))), (((/* implicit */long long int) min((3112212988U), (((/* implicit */unsigned int) (unsigned char)12)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_0 [i_2] [i_2]))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_0] = max((max((((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */long long int) arr_1 [(_Bool)1] [(_Bool)1])))), ((-(13LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) arr_11 [i_0] [16] [i_1])))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4579311747204866178LL)) ? (-8379727842983272935LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [12LL] [i_0 + 1])))))));
                            var_18 = min((max((min((((/* implicit */short) arr_5 [i_0] [i_0] [i_0])), ((short)-19256))), (((/* implicit */short) arr_7 [i_0] [i_0 - 3] [(unsigned char)12])))), (var_9));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 2) 
                        {
                            arr_21 [i_0] [i_0] [i_0 + 1] [i_3] [i_0] |= ((/* implicit */signed char) var_5);
                            var_19 = (((~((+(arr_19 [i_1] [i_3] [i_5]))))) - ((~(arr_0 [i_1] [i_2]))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_3 [i_3]) : (arr_3 [i_2]))))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) 1073741824))));
                            var_22 = ((/* implicit */signed char) (((((~(((/* implicit */int) min(((unsigned char)89), ((unsigned char)128)))))) + (2147483647))) << (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)31771)) && (((/* implicit */_Bool) (short)-1)))))))));
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_3))));
                        arr_26 [i_0 - 2] [i_1] [i_0] [i_2] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_1] [i_0] [i_6])) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) / (arr_19 [i_6] [i_0] [i_2]))) : (8082417916013079670LL)));
                    }
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) (((~((~(((/* implicit */int) var_8)))))) ^ (((/* implicit */int) min((arr_13 [18LL] [i_7] [(_Bool)1] [i_2] [i_1] [(short)12] [(short)12]), ((!(((/* implicit */_Bool) -1537681339)))))))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */_Bool) max((max((((long long int) (short)(-32767 - 1))), (max((8849030207754338892LL), (6107001480912008705LL))))), (((/* implicit */long long int) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) arr_27 [i_0 - 2] [i_1] [8LL] [i_2] [22LL] [i_0])))))));
                            var_26 ^= ((/* implicit */_Bool) min((3884560642865421238LL), (-6225525145146291437LL)));
                            var_27 = ((/* implicit */long long int) ((max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))), (5LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_7])))));
                            var_28 = min((((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_10 [i_8] [i_7] [i_2] [i_1])) || (((/* implicit */_Bool) arr_3 [i_0]))))))), (((min((arr_24 [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_31 [i_0] [i_0])))) / (((var_0) + (var_2))))));
                            arr_33 [(short)22] [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_32 [i_0 - 2] [i_0 + 1]))))), (min((2914206468041936974LL), (((/* implicit */long long int) 3452044506U))))));
                        }
                        arr_34 [i_0] [i_1] [i_7] [i_7] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_31 [6LL] [i_0])) ? (((/* implicit */int) arr_13 [i_0 + 1] [i_0] [i_0] [i_0] [13] [2LL] [i_0 + 1])) : (((/* implicit */int) (short)-28776))))));
                    }
                }
            } 
        } 
    } 
}
