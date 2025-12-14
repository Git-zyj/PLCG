/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63244
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
    var_16 = ((/* implicit */signed char) 3U);
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-25056)) : (-138870866))) < (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)56052))))));
    var_18 = ((/* implicit */int) var_5);
    var_19 = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 8240899214108413363ULL))))), ((unsigned short)55462))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    var_20 ^= ((/* implicit */int) arr_3 [i_2] [i_2]);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                        arr_12 [i_0] [(unsigned char)13] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) (+(arr_11 [i_0]))));
                    }
                    for (unsigned int i_4 = 4; i_4 < 10; i_4 += 4) 
                    {
                        arr_15 [i_0] [(signed char)6] = ((/* implicit */unsigned long long int) var_14);
                        arr_16 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % ((+(((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)21269)))))) : (min((8240899214108413363ULL), (((/* implicit */unsigned long long int) (short)25056))))));
                    }
                    var_22 *= ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)9431)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_1]))))), (arr_1 [i_0 + 1]))), (((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) (short)-25057)))), (((var_8) || (((/* implicit */_Bool) var_4)))))))));
                }
            } 
        } 
    } 
}
