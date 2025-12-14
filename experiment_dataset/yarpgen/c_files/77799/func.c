/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77799
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
    var_19 = ((/* implicit */unsigned char) (signed char)63);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(var_12))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_21 |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_1)) & (arr_7 [i_2 - 1] [i_2 + 1] [i_1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 1] [i_0]))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)255)), ((+(((/* implicit */int) (signed char)63))))));
                            var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)11069))) || (((_Bool) var_17))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [2LL] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((_Bool) arr_15 [i_0] [i_2 + 1]))), (((short) arr_2 [i_2 - 1]))));
                                var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_12 [i_0] [i_0])))));
                                arr_21 [i_2] [i_2] [(signed char)0] [i_0] [i_2 - 1] [i_2 - 1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) min((arr_9 [i_0] [i_1] [i_2] [i_2 - 1]), (var_17)))) : (((/* implicit */int) arr_13 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                                var_25 = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) -1570503896))), (((((/* implicit */int) arr_18 [i_0] [i_2 + 1])) << (((((/* implicit */int) (signed char)-115)) + (136)))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_0]))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 4) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */_Bool) arr_15 [i_7 - 2] [i_7 - 2]);
        arr_25 [i_7] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) == (arr_10 [i_7]));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 20; i_8 += 4) 
    {
        var_28 = ((/* implicit */unsigned long long int) var_15);
        arr_29 [i_8] = ((/* implicit */long long int) ((var_12) > (((/* implicit */int) arr_28 [i_8] [i_8]))));
        var_29 = ((((/* implicit */int) (!(var_15)))) >= (((/* implicit */int) arr_26 [i_8])));
    }
    for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
    {
        var_30 = ((((/* implicit */long long int) ((int) var_5))) / (var_1));
        arr_33 [i_9] = (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)11))))));
    }
}
