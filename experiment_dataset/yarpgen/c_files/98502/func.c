/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98502
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
    var_20 = ((/* implicit */unsigned long long int) var_9);
    var_21 = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((2151099794178204383LL) - (2151099794178204357LL)))))), (min((9644204849379900108ULL), (((/* implicit */unsigned long long int) var_18))))))));
    var_22 += ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) 5105589922521512241ULL);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
            var_24 = ((/* implicit */unsigned short) ((((13341154151188039375ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) ^ (((/* implicit */unsigned long long int) ((long long int) (_Bool)1)))));
        }
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((min((((/* implicit */long long int) arr_1 [i_2] [i_0])), (arr_4 [i_0] [i_0]))), (((/* implicit */long long int) 3459426710U))))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_2]))) > (arr_4 [i_2] [i_0])))) != ((((-(((/* implicit */int) (signed char)105)))) % (((/* implicit */int) var_15))))));
            var_27 = ((/* implicit */int) (-((+(var_7)))));
            var_28 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6834))) * (var_1))))) * (arr_5 [i_0])));
        }
    }
    var_29 = ((((/* implicit */int) var_16)) / (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_2)))))))));
}
