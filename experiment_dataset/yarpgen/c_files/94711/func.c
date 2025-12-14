/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94711
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) 4294967271U);
                var_20 = ((/* implicit */unsigned int) (short)-3926);
                var_21 = ((/* implicit */unsigned int) (signed char)-110);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((4294967271U), (4195361083U)))) || (((/* implicit */_Bool) 32U))));
                arr_9 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)40011)), (99606212U)));
                var_23 *= min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) < (16357962965312578567ULL)))), (min((99606194U), (4294967262U))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) min((max((max((((/* implicit */unsigned int) (signed char)-120)), (4294967263U))), (min((((/* implicit */unsigned int) (signed char)-101)), (21U))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)118)))), ((unsigned short)39489)))))))));
                            arr_15 [i_2 + 1] [i_2] [i_4] [i_5] = max((((/* implicit */long long int) (_Bool)1)), (max((-5525649230381263577LL), (((/* implicit */long long int) 4294967269U)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
