/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55240
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            var_19 = ((/* implicit */short) min((((max((((/* implicit */long long int) (unsigned short)6303)), (arr_2 [i_0] [(unsigned char)6]))) >> (min((var_12), (((/* implicit */long long int) var_9)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-9223372036854775788LL)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) -2147483631)) ? (var_4) : (var_2))))))));
            var_20 = ((/* implicit */int) max((max((((((/* implicit */_Bool) 2147483631)) ? (((/* implicit */long long int) var_2)) : (-8284294539673804360LL))), (var_11))), (((/* implicit */long long int) arr_3 [i_0] [i_1]))));
        }
        for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) ((signed char) (signed char)-87))) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) ((short) (unsigned char)196)))))));
            var_21 = ((/* implicit */_Bool) min((14660167847553805739ULL), (((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_5 [i_0] [i_2] [i_0])))))));
        }
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) var_1))))) < (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_18), (var_5))))) : ((((_Bool)0) ? (-4407444128335328526LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-121)))))))));
            /* LoopSeq 1 */
            for (short i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) 4407444128335328525LL))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    var_24 = ((/* implicit */unsigned short) 3458764513820540928ULL);
                    arr_17 [i_0] [i_3] [(signed char)11] [i_5] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
                    var_25 = ((/* implicit */signed char) max((var_25), (arr_5 [i_0] [i_3] [i_5])));
                    /* LoopSeq 3 */
                    for (signed char i_6 = 4; i_6 < 19; i_6 += 4) 
                    {
                        var_26 = ((/* implicit */long long int) var_6);
                        var_27 += ((/* implicit */signed char) var_11);
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        arr_24 [i_7] [12U] [i_7] |= ((/* implicit */short) ((_Bool) var_10));
                        arr_25 [i_0] [i_3] [i_7] &= ((/* implicit */unsigned short) var_12);
                        var_28 = ((/* implicit */signed char) (~(((/* implicit */int) arr_12 [i_0]))));
                        arr_26 [i_0] [(unsigned char)6] = ((/* implicit */unsigned int) ((((var_12) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) != (((/* implicit */long long int) var_2))));
                    }
                    for (signed char i_8 = 3; i_8 < 17; i_8 += 1) 
                    {
                        arr_30 [i_8] [i_8 - 1] [i_0] [i_4] [i_0] [i_0] [i_0] = var_11;
                        var_29 = (~(arr_22 [i_8 - 3] [i_8 - 3] [i_8] [i_8 - 3] [i_5]));
                    }
                }
                var_30 = ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)121)) > (((/* implicit */int) arr_10 [i_0] [i_0])))))));
                var_31 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4839))) > (2824260412U)));
                arr_31 [(_Bool)1] |= ((/* implicit */signed char) var_1);
            }
        }
        var_32 *= var_0;
    }
    var_33 = ((/* implicit */unsigned long long int) var_7);
}
