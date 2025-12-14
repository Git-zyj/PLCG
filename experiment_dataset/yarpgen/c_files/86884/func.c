/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86884
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned long long int) (unsigned char)217);
            var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (2056154978U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((var_11) || ((_Bool)1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))) : (var_10)))))))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned char) ((arr_5 [i_0]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [i_0 - 1]))))));
        arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_2 [i_0])))) + (-8634063438312177113LL)));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)117)) && (((arr_2 [i_0]) == (arr_4 [i_0] [i_0 + 1])))));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_10 [i_2] [(unsigned short)9] = arr_2 [i_2];
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) && (((/* implicit */_Bool) var_3)))))) + (arr_5 [i_2]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 8634063438312177104LL)) && (((/* implicit */_Bool) (unsigned char)252))))))))))));
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((arr_0 [i_2] [i_2]) * (arr_2 [i_2]))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [11LL] [i_2]))) != (arr_5 [i_2])))))))));
    }
    /* vectorizable */
    for (short i_3 = 4; i_3 < 22; i_3 += 2) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)117)) * (((/* implicit */int) (unsigned char)128))))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_9)))) : (((int) var_8))));
        arr_14 [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181)))))) ? (((max((8634063438312177113LL), (((/* implicit */long long int) (unsigned char)138)))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_15 [i_4])))))))) : (((/* implicit */long long int) 0))));
        arr_17 [i_4] = ((/* implicit */unsigned int) 16353697521054968560ULL);
    }
    var_19 = ((/* implicit */int) ((var_1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 617037153U)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (unsigned char)179))))) : (min((9223372036854775807LL), (((/* implicit */long long int) max(((unsigned char)160), (((/* implicit */unsigned char) (signed char)-1)))))))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_5))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((var_6) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-118)) | (var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopSeq 1 */
    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */int) arr_18 [i_5] [i_5]);
        var_22 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned char)212)) >= (var_5))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_20 [i_5]))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((var_8) - (1873485478)))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) var_4))))) : (((/* implicit */int) (signed char)46))))));
        arr_22 [i_5] = var_5;
    }
}
