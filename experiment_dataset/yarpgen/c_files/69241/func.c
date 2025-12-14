/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69241
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 7; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) arr_4 [6]);
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_2 - 2]), (((/* implicit */unsigned long long int) arr_3 [i_2 - 1] [i_2 + 3] [i_2 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 3] [i_2 - 1])) : (((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 3] [i_2 - 1]))))) : (4057875254U)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_21 *= ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4057875254U)) ? (237092036U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3])))))) ? (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))) : (4057875260U))) : (min((((/* implicit */unsigned int) (signed char)52)), (4057875259U)))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 2) 
            {
                {
                    var_22 -= ((/* implicit */int) min((((/* implicit */long long int) 237092036U)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 695313532)), (15682192554707096161ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3777769503070710868ULL)) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) (short)16627))))) : (min((-3238036932818349120LL), (((/* implicit */long long int) (signed char)112))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 2) 
                    {
                        for (long long int i_7 = 1; i_7 < 13; i_7 += 4) 
                        {
                            {
                                arr_23 [i_3] [i_3] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) min((6905799014520138397LL), (((/* implicit */long long int) arr_16 [i_3] [i_3 - 1] [i_3 - 1]))))) ? (min((((/* implicit */unsigned long long int) -695313532)), (arr_14 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17141646211728522434ULL)) ? (arr_18 [(signed char)2] [i_5] [i_6]) : (3756616144U)))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_19 [i_3] [i_7] [i_7 + 1] [i_3] [i_7 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6]))) : (arr_16 [i_5] [i_5] [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_5 + 1])) ? (((/* implicit */int) (short)-16627)) : (arr_17 [i_4] [i_7])))))))));
                                var_23 = ((/* implicit */unsigned char) arr_13 [i_3]);
                            }
                        } 
                    } 
                    var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_17 [i_3] [i_3]), (((/* implicit */int) arr_13 [i_3]))))) ? (((/* implicit */unsigned long long int) min((arr_15 [i_3] [i_3]), (((/* implicit */int) (_Bool)1))))) : (max((arr_14 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_22 [i_3]))))))) ? (2713565203U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    arr_24 [i_5 + 3] [i_5] [i_5 + 2] [i_5] = ((/* implicit */signed char) min((((min((arr_22 [i_4]), (arr_22 [i_4]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5 + 3]))) : (((arr_12 [i_3]) ? (arr_14 [i_3] [i_5]) : (((/* implicit */unsigned long long int) arr_16 [i_3] [i_4] [i_3])))))), (((/* implicit */unsigned long long int) arr_18 [i_3] [i_3] [i_3]))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) min((1432339954), (((/* implicit */int) arr_12 [i_3]))))), (min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_14 [i_3] [i_3]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_21 [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3]))))))));
        var_26 -= ((/* implicit */int) min((((/* implicit */short) arr_22 [i_3])), (((short) min((-138483122), (((/* implicit */int) (unsigned short)60417)))))));
        arr_25 [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_12 [i_3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (16383LL)))))) : ((-((~(arr_18 [i_3 - 1] [i_3] [i_3])))))));
    }
    for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        var_27 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_8] [i_8])) ? (((((/* implicit */_Bool) arr_13 [i_8])) ? (((/* implicit */int) arr_13 [i_8])) : (((/* implicit */int) arr_26 [i_8])))) : (((/* implicit */int) arr_13 [i_8]))))), (((unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_16 [i_8] [i_8] [i_8])))));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) min((min((((((/* implicit */_Bool) arr_19 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (arr_14 [i_8] [i_8]) : (((/* implicit */unsigned long long int) 4294967295U)))), (((/* implicit */unsigned long long int) min((arr_15 [i_8] [i_8]), (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (arr_15 [i_8] [9LL])))) ? (min((((/* implicit */int) arr_20 [i_8] [i_8] [i_8])), (arr_19 [i_8] [i_8] [i_8] [i_8] [i_8]))) : (((/* implicit */int) arr_12 [i_8]))))))))));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_35 [i_9] [i_9] [i_9 + 2] [i_11] [i_9] [i_9] = ((/* implicit */long long int) 4294967290U);
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_26 [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_9 + 3] [i_9] [i_9 + 2] [i_9 + 1] [i_9]))) : (((((/* implicit */_Bool) arr_13 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8]))) : (304825549U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_21 [i_9] [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9]), (arr_21 [i_9] [i_9 + 1] [i_9] [i_9 - 1] [i_10]))))) : (max((min((((/* implicit */unsigned int) (unsigned char)148)), (2273856988U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_10])) ? (((/* implicit */int) arr_12 [i_10])) : (-695313532))))))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5118)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_8])))))))) ? (8328325430251123191ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)71)) ? (arr_14 [i_10] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20732)))))) ? (arr_15 [i_9 + 2] [i_9 + 2]) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (signed char)-1)))))))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min(((unsigned char)205), (((/* implicit */unsigned char) arr_22 [i_8]))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_12 [i_8])), (arr_13 [(short)10])))), (((((/* implicit */_Bool) (unsigned short)60417)) ? (7597019412152132977ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_8])))))))));
    }
}
