/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8377
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
    var_11 = ((/* implicit */int) var_0);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)16380)) == (((/* implicit */int) (signed char)81))))), (arr_3 [i_0] [i_0]))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_1 [i_0]))) / ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (-7520063750156734548LL))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) | (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
        arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)13192)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_2 [i_0]))))));
        arr_7 [i_0] [i_0] |= ((/* implicit */signed char) ((max((arr_1 [i_0]), (((/* implicit */long long int) arr_2 [i_0])))) <= (((/* implicit */long long int) ((((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) * (((((/* implicit */_Bool) (unsigned short)40640)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)3584)))))))));
    }
    var_12 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15248))) | (((((/* implicit */_Bool) (short)-15808)) ? (18265242602223448288ULL) : (((/* implicit */unsigned long long int) var_5)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81)))));
    var_13 = ((/* implicit */long long int) var_3);
}
