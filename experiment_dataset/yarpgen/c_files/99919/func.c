/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99919
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
    var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)110))))), (536870908U)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((((((/* implicit */int) arr_1 [i_3])) + (2147483647))) << (((((/* implicit */int) (unsigned short)59574)) - (59574))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_2] [i_4]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116)))))))))));
                                var_22 |= ((/* implicit */unsigned short) (+(((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (signed char)-1))))) << (((min((((/* implicit */int) arr_5 [i_0] [i_0] [i_2])), (2112525864))) - (14664)))))));
                                var_23 = ((/* implicit */signed char) ((((unsigned int) (short)-31669)) % (3758096365U)));
                                var_24 -= ((/* implicit */short) (signed char)120);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */int) ((short) -2112525865));
                            arr_18 [i_0] = max((min((min((((/* implicit */unsigned int) arr_5 [17U] [i_1] [i_6])), (536870930U))), (((((/* implicit */_Bool) (short)-9479)) ? (arr_0 [i_5]) : (((/* implicit */unsigned int) var_10)))))), (max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)65535)))), ((+(var_18))))));
                            var_26 = ((/* implicit */short) max((max(((signed char)0), ((signed char)-14))), (((signed char) ((((/* implicit */_Bool) (signed char)41)) || (((/* implicit */_Bool) 536870930U)))))));
                        }
                    } 
                } 
                arr_19 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_14);
            }
        } 
    } 
}
