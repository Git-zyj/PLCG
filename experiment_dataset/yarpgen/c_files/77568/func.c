/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77568
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
    var_16 = ((/* implicit */_Bool) (unsigned char)9);
    var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)253))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)131))))) ? (((((/* implicit */_Bool) ((unsigned short) (unsigned char)15))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned char)7))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((short)17062), (((/* implicit */short) (unsigned char)246))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) min((min((((/* implicit */short) (signed char)-1)), ((short)-17073))), (((/* implicit */short) (unsigned char)9)))))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_6 [i_1] [i_2]))) != (((/* implicit */int) (unsigned char)26)))))));
                            var_19 = ((/* implicit */long long int) (_Bool)1);
                            var_20 ^= ((/* implicit */signed char) ((unsigned short) ((((arr_1 [i_3]) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28129))))));
                            var_21 -= ((/* implicit */_Bool) max(((+(arr_7 [i_0] [i_1] [i_1]))), (((/* implicit */int) (unsigned char)8))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((((long long int) (signed char)64)), (((/* implicit */long long int) ((unsigned char) (unsigned char)250)))));
                arr_11 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)220))));
                var_23 -= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) ((1609369098U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) min((arr_2 [i_1] [i_1]), (((/* implicit */unsigned char) (_Bool)1))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_14);
    var_25 = ((/* implicit */unsigned short) var_14);
}
