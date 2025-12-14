/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69743
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
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) var_7);
        var_13 &= ((/* implicit */short) max(((+(min((var_6), (((/* implicit */unsigned long long int) (short)32767)))))), (max((((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 + 1])), (max((((/* implicit */unsigned long long int) var_8)), (var_2)))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_6 [i_1] = ((int) ((unsigned long long int) arr_5 [i_1] [i_1]));
        var_14 = ((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 166235861)) : (var_11))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (15671986654757801804ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)61583))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((arr_2 [(short)0] [i_1]), (((/* implicit */long long int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (var_2))))) : (((((/* implicit */_Bool) (short)32767)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))))))))));
        var_16 ^= var_5;
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_8 [i_2]))));
        var_18 = ((/* implicit */long long int) (+(13330320122541749074ULL)));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_10 [i_3] [i_2]))))));
            var_20 |= max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_2] [i_2])), (13250132829472412474ULL)))) ? (288230376149614592ULL) : (max((((/* implicit */unsigned long long int) (unsigned short)127)), (18273733257543724297ULL))))), (((/* implicit */unsigned long long int) (+((-(arr_8 [i_2])))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 4) 
        {
            arr_13 [i_2] = ((/* implicit */int) var_4);
            var_21 = ((/* implicit */int) min((var_21), (((int) 1482116920588737062ULL))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_4 + 3])) ? ((+(((/* implicit */int) arr_4 [i_2] [i_4])))) : (((/* implicit */int) max((arr_11 [i_2]), (((/* implicit */unsigned short) arr_10 [i_4 + 1] [i_4])))))));
            var_23 |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_4])) != (var_5))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_4 + 2]))) / (var_10)))));
        }
        for (short i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((arr_17 [i_2] [i_5] [i_5]), (((/* implicit */short) arr_10 [i_2] [i_2]))))), (min((min((var_3), (var_5))), (((/* implicit */unsigned long long int) ((var_7) % (var_7))))))));
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) min((arr_9 [8ULL] [i_5] [(unsigned short)14]), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) arr_12 [i_2] [i_5])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (_Bool)1))))))))))));
            arr_18 [i_5] [i_2] = ((/* implicit */long long int) var_8);
        }
        var_26 = (((!(((/* implicit */_Bool) min((arr_9 [i_2] [i_2] [i_2]), (arr_2 [i_2] [i_2])))))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (arr_16 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32767)) % (arr_8 [i_2])))), (var_10))));
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned short)24810)))))) >> (((max((var_3), ((~(var_3))))) - (16773728670855702423ULL)))));
    var_28 = min((min((max((var_10), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)16407))))))), (var_2));
    var_29 += ((((unsigned long long int) max((((/* implicit */unsigned long long int) var_8)), (var_2)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))));
}
