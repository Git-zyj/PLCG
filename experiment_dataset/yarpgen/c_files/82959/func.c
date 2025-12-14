/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82959
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
    var_18 = ((/* implicit */int) ((unsigned long long int) var_6));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_19 |= arr_1 [(_Bool)1];
                            arr_8 [i_0] [i_1] [(unsigned char)13] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_4 [i_1] [i_1] [i_2] [i_3 + 2])))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (16943339929534426857ULL)))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(max((((/* implicit */int) (unsigned char)209)), (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (unsigned char)15)))))))))));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)20)), ((unsigned char)209)))), ((~(4336005622360082065ULL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((_Bool) (unsigned char)145));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)113), ((unsigned char)12))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113))) - (1793845715U)))))) ? (((/* implicit */int) var_16)) : ((-(((/* implicit */int) (signed char)92))))));
}
