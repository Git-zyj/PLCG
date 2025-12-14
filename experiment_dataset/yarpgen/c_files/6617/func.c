/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6617
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
    var_10 &= ((/* implicit */int) 13053188764603195534ULL);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            var_11 = ((/* implicit */signed char) ((((int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) != (((int) var_3))));
            var_12 += arr_3 [i_1] [i_0];
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(2848194127333823474ULL)))))))));
            var_14 &= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2848194127333823474ULL)) ? (((/* implicit */int) (unsigned short)3287)) : (((/* implicit */int) (short)-12410))))), (min((((/* implicit */unsigned long long int) arr_0 [i_1])), (4756857305728487959ULL))));
            arr_5 [i_0] [i_1] = ((/* implicit */int) (signed char)0);
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) var_2)))));
            arr_10 [i_0] [i_0] [i_2] &= 15598549946375728142ULL;
        }
        var_16 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((signed char) arr_3 [i_0] [i_0]))), (var_9)));
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) : (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)46903)) : (arr_4 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            var_17 = arr_6 [i_3] [i_0] [i_0];
            arr_16 [i_3] = ((/* implicit */int) ((unsigned long long int) -510346424));
            arr_17 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) ^ ((+(arr_3 [i_0] [i_3])))))) ? (((arr_12 [i_0] [i_3] [i_3]) - (((/* implicit */int) var_4)))) : (arr_12 [i_0] [i_0] [i_0])));
            var_18 = ((/* implicit */unsigned int) min((((arr_8 [i_0]) << (((3665001860530345788ULL) - (3665001860530345788ULL))))), (((((/* implicit */_Bool) var_1)) ? (1216539587) : (arr_8 [i_0])))));
        }
        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_19 = ((/* implicit */int) var_9);
            arr_20 [i_0] [i_4] = ((/* implicit */int) ((unsigned long long int) var_3));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(17111905811533305505ULL)))) ? ((-(((((/* implicit */_Bool) arr_19 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))) : (min((-1289825537), (max((var_6), (((/* implicit */int) arr_9 [i_0] [i_4]))))))));
        }
        arr_21 [i_0] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((18446744073709551611ULL), (var_2)))) ? (1149804914) : (((/* implicit */int) var_3)))), ((-(arr_4 [i_0])))));
    }
    var_21 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -407708343)) ? (((/* implicit */int) var_0)) : (var_6))), (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((((((/* implicit */_Bool) var_9)) ? (var_7) : (0ULL))), (((((/* implicit */_Bool) var_0)) ? (1ULL) : (((/* implicit */unsigned long long int) var_6)))))));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_0)))))));
}
