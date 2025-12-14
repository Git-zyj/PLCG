/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68234
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
    var_19 = ((/* implicit */long long int) max((var_7), (((/* implicit */short) (!(((/* implicit */_Bool) var_17)))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(-5910419350277860684LL))), (((/* implicit */long long int) max(((short)18273), (((/* implicit */short) (unsigned char)255)))))))) || (((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-18273))) - (1185858014U)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_21 -= ((/* implicit */short) (!(((/* implicit */_Bool) (short)-2995))));
                var_22 &= ((/* implicit */signed char) max((((/* implicit */long long int) (+(arr_0 [i_0 - 1])))), (((long long int) min((((/* implicit */long long int) arr_0 [i_0 + 1])), (arr_4 [i_0 + 1] [i_0 + 1]))))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)80)) - (((/* implicit */int) (unsigned short)15))))) ? (min((3208079338398323049LL), (((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)26672)))))) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)56)), ((+(((/* implicit */int) (signed char)56)))))))));
            }
        } 
    } 
}
