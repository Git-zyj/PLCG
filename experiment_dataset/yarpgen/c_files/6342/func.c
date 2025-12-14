/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6342
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
    var_18 &= ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_17))))))))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 18; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 18; i_4 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) var_16))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) 1567962115U))))) ? ((-(11391760326982920502ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_3 + 1]))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_6))));
                        }
                        for (int i_5 = 1; i_5 < 18; i_5 += 2) /* same iter space */
                        {
                            arr_12 [i_3] [i_1] [i_2] [i_2] [i_5] [i_0] [i_2] = ((/* implicit */unsigned char) ((unsigned short) 4294967295U));
                            var_23 = ((/* implicit */_Bool) (+(var_1)));
                        }
                        var_24 += ((/* implicit */unsigned short) 11391760326982920502ULL);
                        var_25 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))) < (7054983746726631114ULL))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_3 + 1]))) : (((unsigned long long int) var_1))));
                    }
                } 
            } 
            var_27 = ((/* implicit */int) arr_1 [i_1]);
        }
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
            arr_17 [(_Bool)1] [i_6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_6])) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) arr_15 [i_6]))));
        }
        for (short i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */long long int) ((unsigned int) arr_19 [(signed char)1] [i_7] [i_7]));
            var_30 = ((/* implicit */unsigned short) arr_3 [i_0] [i_7]);
        }
        var_31 = var_1;
        var_32 = (~(((((/* implicit */_Bool) 4464059410861420635ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (4464059410861420635ULL))));
        var_33 = ((/* implicit */unsigned char) var_11);
    }
    for (signed char i_8 = 1; i_8 < 15; i_8 += 2) 
    {
        arr_22 [i_8 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [(unsigned short)0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))) == (((/* implicit */int) ((unsigned short) arr_18 [i_8 - 1] [i_8 - 1] [i_8 + 1])))));
        var_34 = ((/* implicit */unsigned char) (-((-((+(var_1)))))));
        arr_23 [i_8] = ((/* implicit */int) arr_1 [i_8 - 1]);
    }
    for (unsigned short i_9 = 1; i_9 < 12; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                {
                    var_35 = var_14;
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_19 [i_9 + 1] [(unsigned char)10] [i_9]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_12 = 1; i_12 < 10; i_12 += 1) 
        {
            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_20 [i_12]))) ? (max((-7442739404103330845LL), (((/* implicit */long long int) arr_31 [i_9 + 2] [i_9] [i_12 + 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_9 - 1] [i_9] [i_12 + 1])) ? (-1675842786) : ((-(((/* implicit */int) arr_13 [i_9] [(_Bool)1] [i_12 + 4])))))))));
            arr_33 [i_9] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8382223360660187866ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_9 - 1] [i_9 + 2] [i_12]))) : (arr_14 [i_9])))) ? (((/* implicit */int) (unsigned short)6784)) : (((/* implicit */int) max((arr_15 [i_12 + 1]), (((/* implicit */unsigned short) var_11))))))), (((((/* implicit */_Bool) (signed char)-119)) ? (2147483647) : (-1436828088)))));
            arr_34 [i_9] [i_9] = ((/* implicit */unsigned char) arr_9 [i_9] [i_9] [8LL] [i_12 + 1] [(unsigned short)12]);
        }
        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) arr_20 [9ULL]))));
        var_39 = ((/* implicit */unsigned short) max((0U), (((/* implicit */unsigned int) max(((short)-31129), (((/* implicit */short) (signed char)-106)))))));
        var_40 = ((/* implicit */unsigned int) max(((unsigned short)58752), (((/* implicit */unsigned short) min(((short)1), (((/* implicit */short) arr_3 [i_9 + 1] [i_9 + 1])))))));
    }
    var_41 = var_11;
}
