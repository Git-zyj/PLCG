/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63307
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (4153628956U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) var_17))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((unsigned int) var_4))));
    var_20 = ((/* implicit */signed char) var_1);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) var_15)), (var_8))))) : (((/* implicit */int) (signed char)12))));
        arr_4 [i_0 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(141338332U))))));
    }
    for (unsigned char i_1 = 3; i_1 < 20; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_11 [i_1 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1 - 2] [i_1 - 3] [i_1 - 3])) >> (((((/* implicit */int) arr_7 [i_1 - 3] [i_1 - 3])) - (52)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) == (max((var_11), (((/* implicit */unsigned int) var_14))))))) : (((/* implicit */int) ((((unsigned int) arr_5 [i_2])) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_6 [i_2] [i_1 - 2])))))))));
            arr_12 [i_1 + 1] [i_2] [(signed char)6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) var_17)))) - (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (141338339U)))) || (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) var_14))))))))));
        }
        arr_13 [i_1] = ((/* implicit */unsigned char) (signed char)-32);
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)13640))));
    }
    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 - 3])) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (unsigned char)56))))) ? (((unsigned int) arr_5 [i_3 - 3])) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_3 - 3]) > (arr_14 [i_3 - 3] [i_3 + 1])))))));
        arr_16 [i_3] = ((/* implicit */signed char) min(((-(arr_5 [i_3 - 3]))), ((~((~(arr_5 [i_3])))))));
        var_24 = ((/* implicit */unsigned short) min((741536796U), (((/* implicit */unsigned int) (unsigned short)45208))));
        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)72))));
    }
    for (unsigned char i_4 = 3; i_4 < 20; i_4 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-40))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)113))))) : (min((741536820U), (((/* implicit */unsigned int) arr_17 [9U])))))) > (((((/* implicit */_Bool) arr_7 [i_4 + 1] [i_4 + 1])) ? (424560104U) : (((2756908593U) >> (((/* implicit */int) (unsigned char)6))))))));
        var_27 ^= ((/* implicit */unsigned char) arr_14 [i_4 + 1] [i_4 - 3]);
        var_28 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_4 + 1])) << (((1538058720U) - (1538058715U)))))), (((((/* implicit */_Bool) 1538058697U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))) : (387041358U)))))));
    }
    var_29 ^= ((/* implicit */unsigned int) var_4);
    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) var_6))));
}
