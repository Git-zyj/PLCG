/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8094
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
    var_11 = ((/* implicit */short) (+(((long long int) (!(((/* implicit */_Bool) var_0)))))));
    var_12 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_7))))))) > (((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (min((18193600309056970293ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
        arr_5 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned short) (signed char)-54))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (15014149029228448429ULL) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)0)))))), (((/* implicit */unsigned long long int) ((max((var_5), (((/* implicit */long long int) var_7)))) != (min((((/* implicit */long long int) arr_0 [i_0 - 1])), (arr_1 [i_0 - 2]))))))));
    }
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((0ULL), (3446630043012661460ULL))) % (max((((/* implicit */unsigned long long int) var_3)), (var_8)))))) ? ((-(((unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)393)))))));
    var_14 |= ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_7))) % (((/* implicit */int) ((unsigned short) var_4)))))) ? (((((/* implicit */_Bool) ((unsigned char) var_7))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (min(((~(2942468887355185237LL))), (((var_10) >> (((-7785756447503459538LL) + (7785756447503459594LL))))))));
}
