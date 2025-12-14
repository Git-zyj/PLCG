/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86842
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
    var_15 = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (var_2))), (((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)76)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)73))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_17 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_1 [i_0])))) < (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_14))))));
            var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_1] [(_Bool)1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179))) ^ (14304878330035687985ULL))) : (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0])))));
            var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)55)), (var_3)))) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((unsigned long long int) arr_2 [(signed char)2]))))));
            var_20 = ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]);
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_21 = ((/* implicit */signed char) (+(min((min((((/* implicit */unsigned long long int) (unsigned char)66)), (4368779499400580365ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5654599074957906962LL)))))))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)58028))))) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)181)), (arr_6 [i_0] [i_0] [i_2]))))) : (max((((/* implicit */unsigned int) (signed char)-33)), (max((((/* implicit */unsigned int) var_13)), (2789637855U)))))));
        }
    }
    var_23 = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned int) var_4)), ((~(4095U))))));
    var_24 = ((((/* implicit */_Bool) max((((14077964574308971242ULL) / (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((var_14) ? (4762568777256951898LL) : (3985507653291280340LL))))))) ? (((/* implicit */long long int) (+(var_13)))) : (var_8));
    var_25 = ((/* implicit */short) ((((unsigned int) max((var_1), (((/* implicit */unsigned short) var_14))))) != (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_14)), (var_3)))))));
}
