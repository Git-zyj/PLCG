/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92997
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (3644300414U)));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1288937938))))) == ((-(((/* implicit */int) (_Bool)1))))))) : (((max((1804115211), (((/* implicit */int) var_6)))) % (((((/* implicit */_Bool) var_1)) ? (-1804115218) : (1804115205)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(unsigned short)7] = ((/* implicit */unsigned int) (~(1804115216)));
        var_17 = ((/* implicit */int) (unsigned short)62444);
    }
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_11 [i_1] [i_3] [i_3] [13U] = ((/* implicit */int) arr_5 [i_1] [19]);
                    arr_12 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (~(1145340029)))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (+((+(arr_9 [i_1] [i_1] [i_1 - 1]))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((16855773664651143530ULL) + (((/* implicit */unsigned long long int) 1853471789)))) / (((/* implicit */unsigned long long int) -297024276))))) ? (arr_6 [(_Bool)1]) : (((-1804115203) / (arr_7 [i_1] [i_1])))));
    }
    var_20 = ((/* implicit */unsigned long long int) min((max(((unsigned short)44019), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) var_13))));
}
