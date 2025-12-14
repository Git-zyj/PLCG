/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9412
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
    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((short) var_11))) : (var_5))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (signed char)-99))))))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)15497)))) % (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36191))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0 + 1] [i_1] = (+(((int) ((_Bool) var_14))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_7))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(-8039088912663243553LL)))) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_11))))) : (min((((/* implicit */long long int) (signed char)-99)), (-8039088912663243570LL)))));
                            var_18 = ((/* implicit */unsigned short) var_8);
                        }
                    } 
                } 
                arr_13 [i_0 - 1] [i_0 - 1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((unsigned short) (unsigned short)4389)), (((/* implicit */unsigned short) (signed char)64)))))));
                var_19 -= ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned short)63791)) * (((/* implicit */int) (signed char)-91)))), (((/* implicit */int) ((((/* implicit */_Bool) 2845916561387405227LL)) || (((/* implicit */_Bool) 5871838855524928623LL)))))));
            }
        } 
    } 
}
