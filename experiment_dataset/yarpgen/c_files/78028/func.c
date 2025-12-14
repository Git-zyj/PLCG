/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78028
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_10 = (-(-8596648972308656314LL));
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)40))))));
        var_11 = ((/* implicit */int) ((((unsigned long long int) arr_0 [i_0] [i_0])) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(var_0)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((-2078038670) > (((/* implicit */int) var_6)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_0])) : (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_1))))));
                    var_13 = (~(749054707));
                }
            } 
        } 
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3 - 1] [i_3] = ((/* implicit */_Bool) ((unsigned short) min(((-(((/* implicit */int) arr_7 [i_3 - 1] [(signed char)21] [i_3] [i_3])))), (((/* implicit */int) arr_10 [i_3 - 1])))));
        var_14 |= ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (-314208854)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), (arr_6 [(signed char)22] [i_3 - 1] [(_Bool)1]))))) : (2964234110980562924ULL))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_3] [i_3])))) ^ (((/* implicit */int) (signed char)52))))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (((((~(5906128855412796611LL))) <= (((/* implicit */long long int) ((/* implicit */int) max(((short)21721), (((/* implicit */short) arr_14 [i_4])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4] [i_4])) & (((/* implicit */int) var_7)))))))) : (((((/* implicit */_Bool) max(((unsigned short)37490), (((/* implicit */unsigned short) (unsigned char)199))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((((/* implicit */_Bool) -314208842)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) var_7)))))))))));
        var_16 *= ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_5 [i_4]), (arr_5 [i_4])))), (((int) arr_1 [i_4] [i_4]))));
        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [15U]))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
    {
        arr_17 [(short)5] = ((/* implicit */unsigned short) (-(3928098762633289977LL)));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((var_0), (((/* implicit */unsigned int) max((arr_6 [i_5] [i_5] [i_5]), (arr_6 [i_5] [i_5] [i_5])))))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3449637455654045741ULL)) && (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (var_0))))))));
            var_20 = arr_13 [i_6] [(short)8];
        }
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_9 = 4; i_9 < 21; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (((_Bool)1) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1436374549U))))) > (((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_10])))))))));
                            arr_34 [i_6] [i_6] [(_Bool)1] = ((/* implicit */unsigned char) arr_4 [i_6]);
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned char) ((long long int) (-((-(((/* implicit */int) arr_28 [i_6])))))));
        }
        /* LoopSeq 2 */
        for (int i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 23; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_42 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6]))) : (arr_23 [i_13])))) ? (((((/* implicit */_Bool) ((int) arr_4 [i_6]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) arr_20 [i_6]))))) : ((~(((/* implicit */int) ((unsigned char) arr_24 [i_6])))))));
                        var_23 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_18 [i_6])) * (((/* implicit */int) var_7)))), ((-(((/* implicit */int) arr_36 [i_13]))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) var_6);
        }
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            var_25 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
            var_26 = max((((/* implicit */int) var_2)), (1195576897));
        }
        arr_46 [i_6] = ((/* implicit */int) (~(arr_26 [i_6] [(_Bool)1] [i_6])));
        var_27 = ((/* implicit */short) ((((/* implicit */int) min((max((arr_7 [i_6] [(signed char)13] [(signed char)13] [i_6]), (var_2))), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_2)))))))) < (((/* implicit */int) (((-(arr_43 [(unsigned short)12] [i_6] [(unsigned short)13]))) >= ((~(((/* implicit */int) (_Bool)1)))))))));
    }
    /* LoopNest 3 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 2) 
        {
            for (unsigned short i_18 = 3; i_18 < 11; i_18 += 4) 
            {
                {
                    var_28 *= (((-(((/* implicit */int) (!(var_1)))))) >= ((~(((/* implicit */int) ((signed char) 1901903995))))));
                    var_29 = ((/* implicit */int) arr_47 [i_18 + 1] [i_18 - 1]);
                    arr_54 [i_16] [i_16] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_26 [i_18 + 2] [i_18 + 2] [i_18 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_26 [i_18 + 2] [i_17] [i_18 + 2])))));
                }
            } 
        } 
    } 
}
