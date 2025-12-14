/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70568
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_1] [i_0]), (((/* implicit */unsigned int) (signed char)109))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (((unsigned int) 5U))))) ? (3146166378U) : (((/* implicit */unsigned int) ((/* implicit */int) ((8019905727908311678ULL) != (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))))))));
                arr_7 [i_1] = ((/* implicit */int) (~(max(((~(3146166378U))), (((/* implicit */unsigned int) arr_4 [i_1]))))));
                arr_8 [i_0] [(unsigned char)14] [i_1] = ((/* implicit */short) arr_4 [i_1]);
                var_11 |= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)43418)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) min((var_7), (((/* implicit */short) var_9)))))))));
                var_12 += ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((short) var_7))) : (var_4))), (((/* implicit */int) max(((signed char)8), ((signed char)-51))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (-((~(((((/* implicit */int) (unsigned short)40685)) & (((/* implicit */int) (signed char)-51)))))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */long long int) 4231241117U)) % (1LL)));
    var_15 = ((/* implicit */_Bool) ((((var_4) != (((int) 507630486)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 10426838345801239938ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51))) : (4294967295U)))))) : (10426838345801239959ULL)));
}
