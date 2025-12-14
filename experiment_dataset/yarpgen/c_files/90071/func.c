/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90071
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
    var_10 = ((/* implicit */unsigned short) (((((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) var_0)))) ^ (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            var_11 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_0 [i_1 - 2] [i_1 - 1]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)504)))))))));
            var_12 = ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) (_Bool)1)))));
        }
        for (unsigned long long int i_2 = 4; i_2 < 8; i_2 += 1) 
        {
            arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)39207)) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) ((unsigned short) arr_3 [i_2])))));
            var_13 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (_Bool)1)), (3997291211U))) * (((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) arr_4 [i_2] [i_2 - 2])) : (((/* implicit */int) arr_4 [i_2] [i_2 - 2])))))));
        }
        for (unsigned short i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            var_14 &= ((/* implicit */signed char) -5450515291154767062LL);
            var_15 = ((/* implicit */unsigned short) 8070450532247928832ULL);
        }
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
        var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_0] [i_0])), ((+(((/* implicit */int) arr_4 [i_0] [i_0]))))));
    }
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((unsigned short) var_8)))));
    var_19 = ((/* implicit */unsigned short) var_6);
}
