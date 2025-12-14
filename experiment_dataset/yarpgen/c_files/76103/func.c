/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76103
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)23)))))))) - ((((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) (signed char)-9))))));
                arr_8 [i_0] = ((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)23)))), (((/* implicit */int) ((unsigned short) 657870630U)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    arr_16 [i_4] [i_4] [i_4] [i_2] = arr_10 [i_3] [20U];
                    var_14 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_9)))) / ((-(((/* implicit */int) max((var_7), ((signed char)-6))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_5 = 2; i_5 < 17; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            var_15 = var_12;
            var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) var_9)), ((+(((/* implicit */int) arr_11 [i_5 + 3]))))));
        }
        var_17 = ((/* implicit */signed char) (+(max((((((/* implicit */int) var_12)) - (((/* implicit */int) arr_19 [i_5])))), (((/* implicit */int) ((signed char) (_Bool)1)))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_13 [i_5 + 3]), (min((arr_14 [i_5] [i_5] [i_5] [i_5 + 2]), (var_7)))))) ? (4495974693628769759LL) : (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_5 - 2]))))))))));
    }
    for (signed char i_7 = 1; i_7 < 23; i_7 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_8 = 2; i_8 < 23; i_8 += 2) 
        {
            arr_25 [i_7 + 1] [i_8] [i_7] = ((/* implicit */unsigned short) (-(min((((/* implicit */int) var_6)), (var_5)))));
            arr_26 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)-46)) / (((/* implicit */int) (signed char)-24))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_23 [i_7] [i_8] [i_7]))));
        }
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) var_5);
                    var_20 = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) arr_14 [i_7] [i_9] [(signed char)4] [(signed char)4])) : (((/* implicit */int) var_1)))) | (((/* implicit */int) arr_24 [(signed char)1]))))));
                    arr_32 [i_7] [i_7 - 1] [7U] [22LL] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_27 [i_7] [(_Bool)1])) <= (var_0)))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (max((((/* implicit */unsigned int) (unsigned short)43041)), (var_11))))))));
                    var_21 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)-40)))) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_24 [i_9])))))) < (((/* implicit */int) min((var_12), (((/* implicit */signed char) arr_12 [i_7 - 1])))))));
                    var_22 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) arr_9 [i_7 - 1])) : (((/* implicit */int) var_3))))));
                }
            } 
        } 
    }
    for (signed char i_11 = 2; i_11 < 10; i_11 += 1) 
    {
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) arr_29 [i_11] [i_11 + 3])))))));
        arr_36 [3LL] [i_11] = ((/* implicit */unsigned short) min((min((var_10), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))))))), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_13)))))))));
        /* LoopSeq 1 */
        for (long long int i_12 = 2; i_12 < 9; i_12 += 2) 
        {
            arr_39 [i_12] [i_12] [i_11 + 1] &= ((/* implicit */unsigned short) var_4);
            arr_40 [i_11 - 2] [i_11 - 2] [i_11] = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) var_2)) : (var_0))), (max((var_5), (((/* implicit */int) var_1)))))), (((/* implicit */int) max((var_10), ((signed char)-4))))));
        }
        var_24 = ((/* implicit */signed char) max((((/* implicit */int) var_7)), ((+(var_0)))));
    }
    var_25 = ((/* implicit */signed char) ((((((/* implicit */int) ((6131612994345241707LL) > (((/* implicit */long long int) ((/* implicit */int) var_2)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) ? (((int) (-(-5371745212824091010LL)))) : (((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) (signed char)23))))) ? ((~(((/* implicit */int) var_9)))) : ((-(((/* implicit */int) var_7))))))));
    var_26 = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
}
