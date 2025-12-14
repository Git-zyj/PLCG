/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89846
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
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) ((((/* implicit */int) ((-4222391306883451527LL) < (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) + (arr_0 [i_0] [i_0])))))) <= ((((_Bool)0) ? (((/* implicit */int) ((((/* implicit */_Bool) 1137333026)) && ((_Bool)1)))) : ((+(1240798783)))))));
                var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_0 [1] [i_1])) ? (((/* implicit */long long int) arr_3 [i_0] [(_Bool)1] [i_0])) : (arr_0 [i_0] [i_0]))), (((((/* implicit */long long int) arr_3 [(signed char)12] [(signed char)12] [i_0])) / (2101914825595779608LL)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((-1137333021) * (((/* implicit */int) ((((/* implicit */int) ((signed char) (short)-20159))) != (((/* implicit */int) arr_5 [i_1])))))));
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((2101914825595779608LL) % (2101914825595779625LL))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((long long int) arr_4 [i_3] [i_3] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_1);
    var_17 = var_10;
    var_18 = ((/* implicit */unsigned int) ((var_7) & (((/* implicit */unsigned long long int) ((long long int) min((15349854926081427489ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
}
