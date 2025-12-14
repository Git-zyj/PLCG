/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65682
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_3 [(_Bool)0] [i_0]))))));
                arr_7 [i_0] = ((/* implicit */int) (unsigned char)254);
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((arr_3 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))) != ((-(3572423117U))))) ? (((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((722544166U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))))))))) : ((~(2182195048U)))));
                var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)19296)), ((~(3572423130U)))));
                var_21 = ((/* implicit */unsigned int) ((short) ((_Bool) ((arr_3 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 16; i_2 += 1) 
    {
        for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        {
                            arr_18 [i_2 - 2] [i_3 + 1] = var_8;
                            arr_19 [i_2] [(unsigned char)4] [i_2] [i_5] = ((/* implicit */_Bool) 722544181U);
                        }
                    } 
                } 
                arr_20 [(unsigned char)15] = ((((_Bool) (+(arr_9 [i_2 + 2])))) ? (722544187U) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) ^ (4066652277U))) : (((/* implicit */unsigned int) arr_17 [i_2 + 2] [i_2 + 2])))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (unsigned char)240);
}
