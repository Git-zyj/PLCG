/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64123
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
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)61)))) - (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((~(var_1))) : (((/* implicit */unsigned long long int) var_11))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 *= ((/* implicit */short) (+(-1143864780)));
        var_17 = ((/* implicit */int) arr_0 [i_0]);
        var_18 = (+(((/* implicit */int) (signed char)-61)));
    }
    /* LoopSeq 3 */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2]))))))) - (min((((/* implicit */int) ((arr_6 [i_1] [10U] [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_1])) : (-1129280207)))))));
            arr_8 [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) max((1129280207), (((/* implicit */int) var_7))))))));
        }
        var_19 = ((/* implicit */int) arr_5 [i_1]);
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_6 [i_3] [i_1] [i_1]))));
            var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) max((10276834118809177542ULL), (arr_6 [i_1] [i_3] [i_3])))) ? (((((/* implicit */_Bool) (signed char)-44)) ? (arr_6 [i_3] [(signed char)2] [i_1]) : (((/* implicit */unsigned long long int) -2576915421163996605LL)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69)))));
            arr_12 [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65520)) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
        }
        arr_13 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_1])) : (1129280207)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (max((arr_6 [i_1] [i_1] [9ULL]), (((/* implicit */unsigned long long int) var_11))))))));
        var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)27441))))) ? (((/* implicit */unsigned long long int) (~(var_0)))) : (max((((/* implicit */unsigned long long int) arr_11 [i_1] [18ULL] [i_1])), (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1950013303)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1]))) : (((arr_11 [i_1] [i_1] [i_1]) ? (-2576915421163996599LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2053724219139508524ULL)) ? (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_9 [i_4]))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4]))) ^ (var_8)))))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_4))));
        arr_16 [i_4] = ((/* implicit */unsigned short) var_6);
    }
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */signed char) -1661642622);
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 1950013308)) ? (((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_5])))) : (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (var_0))), (((/* implicit */int) var_9))))));
    }
}
