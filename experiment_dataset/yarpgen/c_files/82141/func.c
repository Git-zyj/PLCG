/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82141
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
    var_12 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (6420307850687509276LL))));
    var_13 = ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min((1229957628U), (((/* implicit */unsigned int) var_5))))))) : (max((((/* implicit */long long int) var_0)), (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (6420307850687509276LL))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) (unsigned short)58174);
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (unsigned short)7365)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))) + (min(((+(var_10))), (((/* implicit */unsigned long long int) max((arr_2 [i_1]), (((/* implicit */int) var_8)))))))));
            var_15 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned char)91)) / (arr_2 [i_0]))), (((/* implicit */int) ((_Bool) -6420307850687509267LL)))))), (17949256510127025975ULL)));
        }
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_12 [i_0] [i_2] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)7366))));
            var_16 |= ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))), (max((((/* implicit */unsigned long long int) var_9)), (1449312911768354781ULL))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-491)), (3952140236525030356LL)))) ? (arr_11 [i_2]) : (-3952140236525030376LL))))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_15 [i_0] [i_3 - 1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)58166)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (unsigned short)39169))));
            var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) -816482649)))))))), ((~(((unsigned int) 328917366))))));
            arr_16 [i_3] = ((/* implicit */signed char) (short)9977);
        }
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) var_3)) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) : (-3531432204927229001LL))))))))))));
    }
}
