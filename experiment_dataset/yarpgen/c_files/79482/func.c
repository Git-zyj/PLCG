/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79482
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_2))))))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 8487133177770734261LL)) < (var_1)))) / (((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (49152)))))) ^ ((((~(9036137541508164007LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12)) ? (((/* implicit */int) (short)19353)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_1])) || (((/* implicit */_Bool) arr_8 [i_3] [i_2]))))) << (((/* implicit */int) arr_8 [i_3] [i_2]))));
                        arr_10 [i_0] [i_0] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) >= (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (6364195320554081149ULL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((6364195320554081177ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ^ (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_7)))))))) : (((min((var_1), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2]))))));
                        var_15 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (arr_2 [i_2] [i_1] [i_0]))), (((((/* implicit */long long int) min((2178521325U), (((/* implicit */unsigned int) (_Bool)1))))) >= (((((/* implicit */long long int) ((/* implicit */int) (short)-27909))) | (arr_4 [i_1])))))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9025)) ? (((/* implicit */unsigned long long int) 0)) : (2407082690174074748ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) == (var_0)))) : (((((/* implicit */int) var_7)) << (((var_0) - (7876478010238472759ULL))))))) >= (max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)44769))))))));
}
