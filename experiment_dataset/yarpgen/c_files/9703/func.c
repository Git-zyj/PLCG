/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9703
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) (((~(((/* implicit */int) (short)368)))) != (max((((/* implicit */int) arr_1 [i_1])), (var_8)))));
                var_12 = ((/* implicit */unsigned char) (_Bool)0);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (signed char i_4 = 3; i_4 < 15; i_4 += 3) 
            {
                {
                    var_13 |= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((arr_5 [i_3]), (((/* implicit */short) (_Bool)0))))) : (((/* implicit */int) max((arr_5 [i_4 - 1]), ((short)(-32767 - 1)))))));
                    var_14 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_1 [i_2 + 1]))))));
                    arr_15 [i_2] = ((/* implicit */long long int) ((unsigned short) ((short) var_9)));
                    var_15 = ((/* implicit */unsigned int) min((((short) 17592186044415LL)), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_4 [i_4])))))))));
                }
            } 
        } 
    } 
    var_16 = -1262727008;
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        arr_18 [2LL] [2LL] = ((/* implicit */long long int) arr_6 [i_5] [i_5] [i_5]);
        arr_19 [i_5] = ((/* implicit */unsigned short) var_7);
        arr_20 [(signed char)0] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 306725256U)) ? (((/* implicit */int) arr_3 [i_5] [i_5])) : (((/* implicit */int) arr_3 [i_5] [i_5])))) * (((/* implicit */int) ((signed char) arr_3 [i_5] [i_5])))));
        var_17 = ((/* implicit */int) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) max((arr_16 [i_5] [i_5]), (((/* implicit */long long int) var_6))))) : (((3981544824030311374ULL) / (((/* implicit */unsigned long long int) 3526033476U))))))));
        var_18 = ((/* implicit */int) var_1);
    }
    for (short i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            for (short i_8 = 1; i_8 < 10; i_8 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (~(((int) arr_29 [i_8 + 1] [i_7] [i_6]))));
                    arr_30 [(unsigned char)9] [1] [0] = ((/* implicit */_Bool) ((long long int) var_5));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) var_10);
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_39 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2892286533U)) ? (arr_27 [i_9] [i_9] [i_9]) : (arr_27 [i_10] [i_9] [i_6])))) ? (arr_23 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    arr_40 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) arr_9 [i_6]);
                }
            } 
        } 
    }
    for (short i_11 = 0; i_11 < 20; i_11 += 4) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (arr_44 [i_11])))))))));
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            for (signed char i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    {
                        var_22 = ((((/* implicit */int) ((short) arr_41 [i_13]))) | (((int) var_5)));
                        arr_51 [i_11] [i_12] [i_12] [i_13] [i_12] = ((/* implicit */int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)8978)), ((unsigned short)0)))))) ? (max((max((((/* implicit */unsigned int) (short)-1)), (arr_49 [i_11] [i_11] [i_11] [i_11]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64952)))));
                        var_23 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max(((signed char)-68), (((/* implicit */signed char) arr_42 [i_12])))))) + ((-(((((/* implicit */long long int) ((/* implicit */int) (short)2))) - (1867427595240205277LL)))))));
                        var_24 = ((/* implicit */int) min((((var_5) << (((var_2) - (2997788234U))))), (((/* implicit */long long int) (+(arr_49 [i_11] [i_12] [i_12] [i_14]))))));
                        arr_52 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_49 [i_11] [i_13] [i_11] [i_11]))) ? (((/* implicit */int) ((max((((/* implicit */long long int) (short)3178)), (arr_45 [i_14] [i_11]))) != (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))) : (((/* implicit */int) ((var_5) <= (((/* implicit */long long int) (-(var_8)))))))));
                    }
                } 
            } 
        } 
        arr_53 [i_11] [i_11] = ((/* implicit */short) arr_46 [i_11]);
    }
}
