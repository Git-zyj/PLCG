/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70563
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) ((short) var_3))) : ((~(-1521628876))))), (((/* implicit */int) (((+(135291469824ULL))) > (((/* implicit */unsigned long long int) 1563133123)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                            var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2015408842) + (-1521628880)))) || (((/* implicit */_Bool) 10U))));
                            arr_11 [i_0] [i_3] [i_0] [16U] [(short)8] = arr_9 [i_2 + 2] [i_2] [i_2] [i_2 + 2];
                        }
                    } 
                } 
                arr_12 [(signed char)2] [(_Bool)1] [(short)10] = var_2;
                arr_13 [i_0 + 1] = ((/* implicit */unsigned short) 15U);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1521628882) + (((/* implicit */int) (signed char)46))))) ? (max((8521837904516155229LL), (((/* implicit */long long int) -740536858)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (((~(18446743938418081791ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3670016)) ? (6241996380338457591ULL) : (min((((/* implicit */unsigned long long int) (unsigned char)47)), (135291469824ULL)))))) ? (var_2) : (var_2))))));
}
