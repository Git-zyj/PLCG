/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/959
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
    var_19 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32752))))) : (8169451949845624242ULL))));
    var_20 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) arr_4 [i_0] [i_0] [i_2]);
                    var_22 = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [8] [8])) > (((/* implicit */int) (short)-32754)))))) > (arr_0 [i_2 + 1])))), (arr_1 [i_0])));
                }
            } 
        } 
        arr_7 [i_0] [(unsigned short)0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))));
        arr_8 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [(signed char)5])) + (4294967278U)))));
        var_23 = ((/* implicit */_Bool) ((signed char) max((10277292123863927399ULL), (((/* implicit */unsigned long long int) (-(var_0)))))));
    }
}
