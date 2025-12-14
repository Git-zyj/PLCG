/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55886
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1 - 4] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) == (((unsigned int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_15 [10U] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)32)))) > (((/* implicit */int) max((((short) (signed char)-5)), (((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (unsigned char)255))))))))));
                                arr_16 [i_0] [i_2] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)240)) ^ (1149468793)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) (-((~(((/* implicit */int) var_3))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_2)))) % (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)249))))))) ? (((((((/* implicit */_Bool) (unsigned char)16)) && (((/* implicit */_Bool) -811276403101229170LL)))) ? (((/* implicit */int) min((var_12), (var_3)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)32)) > (((/* implicit */int) (unsigned char)119)))))));
}
