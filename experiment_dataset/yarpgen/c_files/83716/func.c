/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83716
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
    var_11 = ((/* implicit */int) var_10);
    var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1049760701U)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (signed char)-37))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_0 - 3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_9)) + (var_2)))))) : ((+(237254976379597702LL)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            var_13 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 1])) ? (((/* implicit */long long int) var_2)) : ((~(-2199024410547892105LL)))))));
            /* LoopSeq 1 */
            for (int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                arr_7 [i_1] = ((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_2]);
                var_14 = ((/* implicit */int) (unsigned short)19096);
                var_15 = ((/* implicit */unsigned short) (unsigned char)13);
            }
            var_16 *= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)242)) ? (7685611750418011213ULL) : (((/* implicit */unsigned long long int) -2984868309213307045LL)))));
            var_17 = ((/* implicit */unsigned char) (+(max(((+(((/* implicit */int) arr_4 [i_0] [i_1 + 1] [8ULL])))), ((-(((/* implicit */int) var_5))))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_3 + 4])) && (((/* implicit */_Bool) arr_5 [i_0])))) && (((/* implicit */_Bool) (~(arr_5 [i_0 - 3]))))));
            arr_10 [2LL] [i_3] [2LL] &= ((/* implicit */_Bool) ((max(((+(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned short)25361)))))) / ((+(((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */int) (unsigned short)39124))))))));
            var_19 |= ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) ((_Bool) var_7)))) % (((-8867549688265995562LL) | (((/* implicit */long long int) 4294967292U))))));
        }
    }
}
