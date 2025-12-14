/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98658
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
    var_18 -= (((!(((/* implicit */_Bool) max(((short)-28702), ((short)-28255)))))) || (((var_11) && (((/* implicit */_Bool) ((unsigned char) (signed char)-42))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (short)28251));
        var_19 = ((/* implicit */int) ((((/* implicit */int) ((signed char) arr_1 [i_0 - 1] [i_0 - 2]))) >= (((((/* implicit */_Bool) -346083098)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 4])) : (var_1)))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) (+(63)));
                        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_0 - 4] [i_1] [i_1]))));
                        arr_13 [i_0] [i_3] [8ULL] [i_3] |= ((((/* implicit */int) var_4)) << (((((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) ((short) arr_12 [i_0] [i_0] [i_2] [i_2] [i_3]))) : (((/* implicit */int) ((short) -9124257342535562750LL))))) - (55))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */int) min((((_Bool) (short)1919)), ((_Bool)0)));
    }
    for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((var_1), (((((/* implicit */int) (_Bool)0)) ^ (max((-346083098), (((/* implicit */int) (unsigned char)255)))))))))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (unsigned char)156)) ^ (var_7))) : (((/* implicit */int) (unsigned char)0))))) ? (((unsigned long long int) ((int) var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_4])) && (((/* implicit */_Bool) arr_7 [i_4]))))))));
        arr_16 [i_4] = ((/* implicit */short) ((((_Bool) (-(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)223)))) : (((arr_6 [i_4]) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_4] [i_4] [i_4])) * (((/* implicit */int) (short)-20765))))) : (3982789008U)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_5 = 3; i_5 < 9; i_5 += 2) 
        {
            var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_5 - 2] [i_5 + 2] [(_Bool)1] [i_5 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 2]))) : (4370008922199849290LL)));
            var_26 = ((((4294967292U) >> (((1709989467U) - (1709989459U))))) >> (((((/* implicit */int) (short)-25747)) + (25755))));
        }
        /* vectorizable */
        for (short i_6 = 3; i_6 < 7; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned int i_8 = 2; i_8 < 7; i_8 += 1) 
                {
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_4] [i_6 + 3] [i_4] [i_8 - 2]))))) ? (((/* implicit */int) (short)-20765)) : (arr_0 [i_4])));
                        arr_28 [i_4] [i_4] [i_7] [1ULL] [i_4] [1ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_8 + 2] [i_7] [i_6 - 3] [i_6 + 1])) ? ((~(((/* implicit */int) (unsigned char)0)))) : (arr_11 [21ULL] [i_6 - 2] [2] [2])));
                        var_28 = ((/* implicit */int) ((_Bool) arr_26 [i_7] [i_7] [i_4] [i_4]));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_9 = 3; i_9 < 10; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)127)) > (((/* implicit */int) var_15))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_3)) : (9346851817114140235ULL)))));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)195)) ? (arr_23 [i_6 - 3] [i_4]) : (((/* implicit */int) (short)1919))));
                    }
                } 
            } 
        }
        var_32 = ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_0)));
    }
    /* LoopNest 2 */
    for (unsigned char i_11 = 2; i_11 < 10; i_11 += 4) 
    {
        for (int i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            {
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) 346083098))));
                var_34 = ((/* implicit */short) ((min((((/* implicit */unsigned int) var_17)), (min((((/* implicit */unsigned int) arr_8 [i_11] [i_12] [i_12] [i_11])), (0U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_12])))));
                var_35 = ((/* implicit */short) ((((/* implicit */int) min(((unsigned char)129), (((/* implicit */unsigned char) arr_9 [i_11 + 1] [i_11 + 2] [i_11 + 1]))))) > (((((/* implicit */int) (signed char)59)) | (((/* implicit */int) arr_9 [i_11 - 2] [i_11 - 2] [i_11 + 1]))))));
                var_36 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (arr_4 [i_12]))))) >= (((/* implicit */int) arr_10 [(short)3] [i_12] [i_12] [i_12] [i_12]))));
            }
        } 
    } 
    var_37 &= ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_0))))), (var_12))));
}
