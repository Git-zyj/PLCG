/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77585
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) 14)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (short)(-32767 - 1)))))))) ? ((~(2013265920U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))))))));
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : ((+(((/* implicit */int) (unsigned short)11))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) var_3))))))) : ((+((~(5967505273921458746ULL))))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] |= ((/* implicit */short) (((!((!(((/* implicit */_Bool) 11738592422455624873ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0])))))))) : (((((/* implicit */_Bool) (-(8796091973632ULL)))) ? ((-(arr_2 [i_0]))) : (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) -5455397139740706340LL))))))));
        arr_4 [i_0] &= ((/* implicit */unsigned short) (~((-((-(var_4)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 893588281)) ? (5455397139740706344LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12695)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1490732432)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2053792975)) ? (((/* implicit */unsigned long long int) var_0)) : (3231720571247023363ULL)))) ? ((~(arr_2 [i_0]))) : ((~(arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (7817562230748735949ULL) : (((/* implicit */unsigned long long int) var_0))))) ? (((arr_7 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [11ULL] [11ULL]))) : (593237519079826681ULL))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (var_9)))));
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (17646763340791987190ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1 - 1])))))) ? (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) arr_6 [i_1] [i_1 + 1])))) : (((((/* implicit */_Bool) 5455397139740706340LL)) ? (var_0) : (((/* implicit */int) arr_7 [i_1]))))));
    }
    for (int i_2 = 2; i_2 < 18; i_2 += 3) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)96)) : (arr_0 [i_2]))))))));
        var_15 = ((((/* implicit */_Bool) 9277616678107653952ULL)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (unsigned char)30)));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_2]) : (((/* implicit */int) arr_9 [i_2] [i_2]))))))) ? ((~((-(((/* implicit */int) (unsigned char)225)))))) : ((-((+(((/* implicit */int) (unsigned short)30499))))))));
    }
}
