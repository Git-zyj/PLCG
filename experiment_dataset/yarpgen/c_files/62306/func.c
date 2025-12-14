/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62306
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_16 = (_Bool)1;
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_17 ^= ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) | (min((((/* implicit */int) var_15)), (var_5))))), (max((((/* implicit */int) arr_0 [i_2])), (((int) arr_3 [5ULL]))))));
                        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_0])), (0)))) ? (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [7U] [i_3] [i_2 - 1] [i_0] [i_0] [i_0]))))));
                    }
                    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (-(((arr_5 [i_2 + 1] [i_0] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (var_12))))))));
                    var_21 = ((/* implicit */int) (+(max((6142628863284633200ULL), (12304115210424918393ULL)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) -7);
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((var_8), (((/* implicit */unsigned long long int) 1587754275))))))) ? ((~(((/* implicit */int) var_13)))) : (max((((/* implicit */int) var_1)), ((-(((/* implicit */int) var_3)))))))))));
    var_24 = ((/* implicit */short) (-(min((min((((/* implicit */unsigned long long int) (unsigned short)5622)), (var_6))), (((/* implicit */unsigned long long int) ((int) var_14)))))));
}
