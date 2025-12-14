/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86072
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [(short)8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))))) ^ (((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9)))) : ((+(2406703889655746405ULL)))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(unsigned short)17])) + (((/* implicit */int) (short)511))))) ? ((+(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [0LL]))))))), (min((((15382232726697416089ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1670261175)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((var_6) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [3])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)8)), (var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [22LL]), (((/* implicit */unsigned short) var_12)))))) : (1185069714850849467LL)))));
        var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_0] [i_0])), (1717529389)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (9522544891240747975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_19 = ((/* implicit */long long int) (_Bool)1);
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) (short)15285);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (((short) (unsigned char)30))))) ? (((/* implicit */int) ((unsigned short) 1670261174))) : (((((/* implicit */_Bool) var_10)) ? (-1670261175) : (((/* implicit */int) (signed char)15))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)16)), (min((max((((/* implicit */int) (_Bool)1)), (607498426))), ((+(((/* implicit */int) arr_0 [i_1] [i_1]))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((2523154048080376471ULL) < (15923590025629175136ULL))))));
        arr_13 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_2 - 1]))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_7))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                {
                    var_22 -= ((((((/* implicit */int) arr_24 [i_3] [i_3 - 1] [i_3])) >= (((/* implicit */int) var_0)))) ? ((+(((/* implicit */int) min(((unsigned short)2975), (((/* implicit */unsigned short) (short)-13925))))))) : (((/* implicit */int) arr_18 [i_3 - 1] [i_3 - 1] [i_5])));
                    var_23 = ((/* implicit */short) 18446744073709551603ULL);
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_6 [i_3 - 1])))) ? (min((0LL), (((/* implicit */long long int) arr_24 [i_3 - 1] [i_3 - 1] [i_3 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_24 [i_3 - 1] [i_3 - 1] [i_3 - 1]))))));
                }
            } 
        } 
        var_25 = ((/* implicit */short) min((arr_19 [(_Bool)1] [(_Bool)1] [i_3]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)7)))))));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                {
                    arr_34 [i_6] [i_8] = ((/* implicit */int) (unsigned short)40303);
                    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) == (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_32 [i_6] [(_Bool)1] [i_6] [i_6])))) ? (((((/* implicit */_Bool) 2047ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1444077230U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)15)))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_2);
}
