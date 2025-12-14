/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96566
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_2 [i_0] [i_1]) ? (((/* implicit */unsigned int) 4095)) : (arr_3 [i_0]))))));
            var_17 = ((((/* implicit */long long int) ((/* implicit */int) var_11))) - (max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)25228))) >= (-7100583640121441264LL)))), (arr_4 [i_0] [i_1]))));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) ((arr_1 [i_0] [i_1]) == (((/* implicit */long long int) 82201884U)))))))) >= ((+(arr_1 [i_0] [i_1]))))))));
            var_19 = arr_4 [i_1] [i_1];
        }
        arr_6 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -196972754))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_9 [i_2] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_3] [i_3] [i_4]))) : (min((((/* implicit */long long int) (unsigned short)40837)), (arr_10 [i_2] [i_3] [i_3]))))), (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)37)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) (unsigned short)24698)))))))));
                    var_21 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) ((((/* implicit */int) (signed char)127)) != (((/* implicit */int) var_11))))))), (((/* implicit */int) (signed char)-70))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 4; i_5 < 13; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5 - 2] [i_5 - 4] [i_5]))) <= (arr_10 [i_6] [i_5] [i_6]))) ? (min((((/* implicit */long long int) arr_13 [i_6] [i_5] [i_2] [i_2])), (8481891904392186082LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)37)))))) ? (((/* implicit */int) (unsigned short)44160)) : (((/* implicit */int) max((((/* implicit */signed char) ((var_1) < (((/* implicit */long long int) -2078943963))))), ((signed char)-97))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 14; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((5595661268840231551ULL) << (((((/* implicit */int) (unsigned short)51183)) - (51152)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
                                arr_23 [i_8] [i_6] [i_7 - 2] [i_6] [i_6] [i_2] = ((/* implicit */long long int) ((short) min((((/* implicit */short) (signed char)-77)), ((short)6219))));
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_5)), (arr_16 [i_2] [i_5]))), (((/* implicit */unsigned long long int) arr_10 [(unsigned short)10] [i_5] [i_7]))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)34821)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [i_2] [i_5 - 1] [i_6] [i_6])), ((unsigned char)1)))) - (((/* implicit */int) min((arr_12 [i_2] [i_5 - 1] [i_6] [i_6]), (arr_12 [i_5 + 2] [i_5 - 1] [i_5] [i_5])))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)1))));
    }
    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        var_27 = ((/* implicit */short) arr_24 [i_9] [i_9]);
        arr_27 [i_9] [i_9] = ((/* implicit */_Bool) arr_24 [i_9] [i_9]);
    }
    for (long long int i_10 = 1; i_10 < 9; i_10 += 2) 
    {
        var_28 = ((unsigned char) max((((/* implicit */unsigned long long int) arr_20 [i_10])), (((((/* implicit */_Bool) arr_21 [i_10] [i_10] [i_10] [i_10 + 1] [i_10])) ? (5040576500086257015ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        arr_31 [i_10] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) (((+(((/* implicit */int) arr_8 [i_10 + 1])))) > (((/* implicit */int) arr_30 [i_10])))))));
        /* LoopSeq 3 */
        for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            var_29 = ((/* implicit */short) ((((/* implicit */int) (short)-32078)) < (((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)0))))));
            var_30 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-102)))) : (((/* implicit */int) ((((/* implicit */int) arr_21 [i_10] [i_10 + 1] [i_10 + 1] [i_11] [(unsigned char)11])) > (((/* implicit */int) var_9)))))));
        }
        for (long long int i_12 = 4; i_12 < 6; i_12 += 2) 
        {
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) 12851082804869320064ULL))));
            var_32 = ((/* implicit */unsigned long long int) arr_29 [i_12]);
            arr_40 [i_10] [i_10] = ((/* implicit */unsigned int) (~(-196972754)));
            /* LoopSeq 2 */
            for (unsigned short i_13 = 2; i_13 < 8; i_13 += 4) 
            {
                var_33 -= ((/* implicit */unsigned short) var_14);
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) (~(min((((((/* implicit */int) arr_7 [i_12] [i_10])) / (((/* implicit */int) arr_8 [i_15])))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_21 [i_10] [(unsigned char)2] [i_13] [(unsigned char)2] [i_13])), (var_8))))))));
                            var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_46 [i_12] [i_12 + 3] [i_13 - 1] [i_15] [i_15] [i_15])))))));
                            var_36 = min((((/* implicit */long long int) min((0U), (0U)))), (var_1));
                            arr_48 [i_12] [i_10] = ((/* implicit */unsigned long long int) arr_25 [i_10] [i_15]);
                        }
                    } 
                } 
                var_37 -= ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) var_16)), (var_8)))) & (((/* implicit */int) arr_2 [i_10 + 1] [i_12]))));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    arr_52 [i_10] [i_13] = (unsigned char)7;
                    arr_53 [i_10] [i_12] [i_12] [i_12 + 1] [i_12] = ((/* implicit */long long int) ((max((((/* implicit */long long int) arr_33 [i_12 + 4])), (70368744177663LL))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7)))));
                    arr_54 [i_10 - 1] [i_12 + 2] [i_12 + 2] [i_10] [i_13] [i_16 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)30210)) - (((/* implicit */int) (signed char)24)))), (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) var_14)) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_10 + 1] [i_16 + 1]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_46 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])), ((unsigned short)37712)))))))));
                }
                arr_55 [i_10 + 1] [i_10 - 1] [i_10] [i_13] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_10])) ? (((((/* implicit */int) (unsigned short)64734)) / (((/* implicit */int) (unsigned short)44160)))) : (((/* implicit */int) (unsigned char)88))))), ((+(max((arr_0 [i_10]), (((/* implicit */unsigned int) arr_17 [i_13] [i_13] [i_12] [i_13 + 1]))))))));
            }
            for (long long int i_17 = 0; i_17 < 10; i_17 += 2) 
            {
                var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_57 [i_10 - 1] [i_12 + 1] [i_12 - 2])))))));
                var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) var_10))));
            }
        }
        for (unsigned char i_18 = 1; i_18 < 9; i_18 += 2) 
        {
            arr_60 [i_10] [i_10] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((2601547178287267655LL), (((/* implicit */long long int) var_12))))))))));
            var_40 = ((/* implicit */unsigned long long int) var_4);
            arr_61 [i_10] [i_10] = max(((~(min((((/* implicit */unsigned int) var_7)), (134215680U))))), (((/* implicit */unsigned int) var_6)));
            /* LoopNest 2 */
            for (unsigned short i_19 = 0; i_19 < 10; i_19 += 2) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        arr_69 [i_10] [i_18 + 1] [i_19] [i_20] [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_4 [i_10 - 1] [i_20]) ^ ((-(arr_26 [i_18 + 1])))))) != (((((/* implicit */_Bool) 6012605134055370711ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57811)) & (((/* implicit */int) (signed char)78))))) : (min((12851082804869320064ULL), (((/* implicit */unsigned long long int) 4294967289U))))))));
                        arr_70 [i_10] [i_10] [i_19] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_10] [i_18] [i_10])) ? (((/* implicit */int) arr_62 [i_10] [i_18 + 1] [i_19])) : (((/* implicit */int) (unsigned char)3))))), (arr_14 [i_18] [i_19] [i_20]))) : (((/* implicit */long long int) ((unsigned int) min((8549080741398484406LL), (((/* implicit */long long int) arr_17 [i_10] [i_10] [i_10] [i_10]))))))));
                    }
                } 
            } 
        }
    }
    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (+(max((((12851082804869320064ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84))))), (((/* implicit */unsigned long long int) var_5)))))))));
    var_42 = ((/* implicit */unsigned int) var_12);
    var_43 ^= ((/* implicit */int) min((min((9117077181037433795LL), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_16)), (var_10)))))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_3)))))));
}
