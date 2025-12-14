/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57639
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
    var_18 = (~(((/* implicit */int) (_Bool)0)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */int) (~(min((((unsigned int) var_9)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 71904934U)))))))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                            {
                                var_20 = ((/* implicit */unsigned short) arr_1 [i_0]);
                                var_21 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-93))));
                            }
                            /* vectorizable */
                            for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                            {
                                var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)97))));
                                var_23 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-96))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                            {
                                var_24 ^= var_13;
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((min((((unsigned long long int) (unsigned short)8931)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)87))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1] [i_2 + 1])))))))))));
                            }
                        }
                    } 
                } 
                arr_18 [i_0] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) (unsigned char)134))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)99))))) : (((3079266870U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & (-808799958))))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) (unsigned char)133);
}
