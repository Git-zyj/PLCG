/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60147
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) var_11))), (var_3)));
                                var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)16))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) - ((~(arr_4 [i_0] [i_1] [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_2] [i_5 - 1] [i_0] [i_2 - 2]);
                                arr_19 [i_0 + 4] [i_0 + 4] [i_0 - 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_2] [i_5])) || (((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_0 - 1] [i_1] [i_2 - 1] [i_5])), (var_4)))) : ((-(((/* implicit */int) arr_15 [i_5 - 1] [i_1] [i_0 - 1])))))) : ((-(((/* implicit */int) var_16))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_6 [i_2 + 1] [i_2 - 2] [i_2 - 2])))) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-119)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65364))))) == (arr_6 [i_0] [i_0] [i_0]))))));
                                var_22 = ((/* implicit */short) (+((~(((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_23 += (!(((/* implicit */_Bool) max(((~(arr_8 [i_0] [i_1] [i_2 - 1] [i_7]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) var_16)) : (-2063413131))))))));
                                var_24 = ((/* implicit */unsigned char) 2728222823U);
                                var_25 = ((/* implicit */unsigned char) (_Bool)1);
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-51)) > (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) var_4)), ((unsigned short)45262)))))));
                                var_27 = ((/* implicit */unsigned int) max((((_Bool) arr_17 [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 2] [i_2] [i_2] [i_1])), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) >= ((-(var_3)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_9 = 2; i_9 < 13; i_9 += 2) 
    {
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            for (short i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 13; i_12 += 1) 
                    {
                        for (int i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)135))));
                                var_29 += ((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) (unsigned char)206)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_9 + 1] [i_10] [i_11] [i_10] [i_13] [i_9 - 1] [i_11])))))) : (arr_4 [i_9 + 2] [i_10] [i_12 + 1])))));
                                arr_39 [i_9 + 2] [i_9 + 1] [i_9] [i_9] [i_9 - 2] [i_9 - 1] [i_9 - 2] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) ((signed char) var_7))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        for (long long int i_15 = 4; i_15 < 11; i_15 += 1) 
                        {
                            {
                                var_30 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_9 - 2] [i_15 - 4])) ? (min((arr_6 [i_9] [i_10] [i_11]), (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) != (2137463727)))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-38))));
                                var_31 = ((/* implicit */_Bool) ((unsigned long long int) min((arr_17 [i_9 - 2] [i_15 + 4] [i_9 - 1] [i_14] [i_15] [i_15 + 3] [i_14]), (((/* implicit */unsigned long long int) arr_7 [i_9 - 2])))));
                                arr_44 [i_14] [i_14] [i_11] [i_10] [i_14] = ((/* implicit */unsigned long long int) (signed char)3);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        for (signed char i_17 = 0; i_17 < 15; i_17 += 1) 
                        {
                            {
                                var_32 &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_9] [i_10] [i_9 + 2] [i_16 - 1] [i_17] [i_11]))));
                                arr_50 [i_9 + 1] [i_16] = ((/* implicit */unsigned int) (!(var_10)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 15; i_18 += 1) 
                    {
                        for (unsigned long long int i_19 = 2; i_19 < 14; i_19 += 1) 
                        {
                            {
                                arr_56 [i_19] [i_19] [i_18] [i_11] [i_19] [i_9 - 1] = (!(((/* implicit */_Bool) (signed char)-38)));
                                var_33 ^= ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) arr_55 [i_11] [i_11] [i_11] [i_18] [i_19 - 2] [i_18] [i_11])), (arr_45 [i_19 - 2] [i_18] [i_10] [i_11] [i_10] [i_9 - 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 4; i_20 < 11; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 15; i_21 += 1) 
                        {
                            {
                                arr_62 [i_9 - 2] [i_11] [i_20] = ((/* implicit */short) arr_9 [i_9 - 2] [i_9 - 1] [i_9 + 1] [i_9 - 2] [i_9 + 2] [i_9 + 1]);
                                var_34 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_49 [i_20] [i_20])) + (2147483647))) << (((((((/* implicit */int) (signed char)-119)) + (144))) - (25)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_22 = 0; i_22 < 24; i_22 += 4) 
    {
        for (unsigned long long int i_23 = 3; i_23 < 23; i_23 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            arr_77 [i_22] [i_23 - 2] [i_24] [i_23] = ((/* implicit */short) var_3);
                            var_35 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)85))));
                            var_36 = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_70 [i_23] [i_23])))), (((/* implicit */int) ((arr_3 [i_22] [i_22]) != (arr_3 [i_22] [i_22]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_26 = 0; i_26 < 24; i_26 += 1) 
                {
                    for (signed char i_27 = 0; i_27 < 24; i_27 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_5))))));
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_22] [i_23 + 1] [i_23 - 2] [i_23 - 2] [i_26])) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) (unsigned char)9)) & (((/* implicit */int) var_4))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [i_22]))));
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) min(((+((~(((/* implicit */int) (signed char)86)))))), (((/* implicit */int) (signed char)-7)))))));
                            var_40 = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) arr_78 [i_22] [i_23] [i_22]))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
                            var_41 = ((/* implicit */int) min((arr_67 [i_22] [i_23 - 3]), (max((var_11), (((/* implicit */long long int) arr_76 [i_23 - 1] [i_23] [i_23 + 1] [i_23 - 2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_28 = 0; i_28 < 24; i_28 += 2) 
                {
                    for (signed char i_29 = 1; i_29 < 22; i_29 += 4) 
                    {
                        {
                            var_42 ^= ((/* implicit */_Bool) (-(max((((/* implicit */int) ((short) (short)-6504))), ((+(((/* implicit */int) (unsigned char)220))))))));
                            var_43 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_22] [i_29 + 2] [i_29 + 1] [i_23 - 2] [i_22])) ? (arr_82 [i_28] [i_29 + 1] [i_29 + 2] [i_23 - 2] [i_28]) : (arr_82 [i_22] [i_29 + 1] [i_29 - 1] [i_23 + 1] [i_22])))) ? (arr_82 [i_28] [i_29 + 1] [i_29 - 1] [i_23 - 3] [i_28]) : (arr_82 [i_28] [i_29 + 1] [i_29 - 1] [i_23 - 3] [i_28])));
                            arr_89 [i_29] [i_23] [i_23] [i_22] = ((/* implicit */unsigned long long int) (-(min(((-(((/* implicit */int) var_14)))), (((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_17)))))))));
                            var_44 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 2530798977790747164LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-38))) : (-1729592113218978861LL))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 24; i_30 += 2) 
                {
                    for (int i_31 = 0; i_31 < 24; i_31 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned char) max((var_16), (((signed char) var_1))));
                            var_46 &= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_15 [i_22] [i_23] [i_30])) : (((/* implicit */int) arr_15 [i_22] [i_23 - 2] [i_30])))));
                            arr_95 [i_23] [i_23] [i_30] [i_31] = ((/* implicit */_Bool) ((short) var_13));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_32 = 0; i_32 < 24; i_32 += 4) 
                {
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        {
                            var_47 += ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) (unsigned char)35)))));
                            arr_100 [i_22] [i_22] [i_23] [i_23] [i_33] = ((/* implicit */signed char) arr_8 [i_33] [i_32] [i_23] [i_22]);
                            arr_101 [i_23] = ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_16)))))))), (var_16)));
                            arr_102 [i_23] [i_23] [i_32] [i_32] [i_32] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) arr_13 [i_22] [i_32] [i_23] [i_22])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
