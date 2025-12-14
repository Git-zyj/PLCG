/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84353
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
    var_17 = ((/* implicit */int) var_16);
    var_18 = ((/* implicit */short) (~(((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 = arr_2 [i_0];
        arr_3 [i_0 + 1] [i_0] = max((((((/* implicit */int) ((unsigned short) (signed char)-23))) % (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))))), (((/* implicit */int) min((arr_1 [i_0 + 1]), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-23)) != (((/* implicit */int) (signed char)-12)))))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 4) /* same iter space */
        {
            arr_7 [i_0] [i_0] = ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_16)), (var_10)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (arr_6 [i_0]))) : (((/* implicit */int) var_10)))) >= (((int) (unsigned short)1023)));
            var_20 = ((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_0 + 1] [i_1 - 1])) & (((arr_0 [i_0] [i_1 - 1]) ^ (arr_0 [i_0 + 1] [i_1 - 2])))));
            arr_8 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((arr_4 [i_0 + 1] [i_1 - 1]) >= (arr_4 [i_0 + 1] [i_1 - 2]))))));
        }
        for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) /* same iter space */
        {
            arr_11 [i_0] [i_2] = ((/* implicit */_Bool) (+(min((((2127109923U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)54000)) << (((arr_2 [i_0 + 1]) + (985352733))))))))));
            arr_12 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)240)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (8693565964740585061ULL)))) ? ((+(min((var_1), (((/* implicit */unsigned int) var_10)))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_10 [i_0]))) | (((/* implicit */unsigned int) ((55720271) | (((/* implicit */int) var_0)))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_9 [i_2 + 1] [i_0 + 1] [i_2 + 1]))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_2] [i_3])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))))))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-((+(((/* implicit */int) var_14)))))))));
                var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0])))))));
                var_25 = ((/* implicit */signed char) var_6);
            }
            for (unsigned short i_4 = 1; i_4 < 23; i_4 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_2] [i_0]))) / (arr_15 [i_0 + 1] [i_0 + 1] [i_4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18879))) : (arr_17 [i_4]))))))) ? ((~(max((2147483647), (((/* implicit */int) var_4)))))) : ((~((-2147483647 - 1)))))))));
                var_27 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (7321771249780711962ULL)));
                arr_19 [i_0] [i_2 + 1] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) -55720272)) : (arr_17 [i_0 + 1]))));
                var_28 &= ((((long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_16))))) >> ((((+((-(var_1))))) - (2449078503U))));
                arr_20 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24079)) ? (((/* implicit */int) (short)-31402)) : (((/* implicit */int) (signed char)-92))))) + (((unsigned long long int) var_0)));
            }
            for (unsigned short i_5 = 1; i_5 < 23; i_5 += 4) /* same iter space */
            {
                arr_24 [i_0 + 1] [i_0 + 1] [i_2] [i_5] &= ((/* implicit */long long int) ((((/* implicit */int) ((arr_17 [i_0 + 1]) > (var_11)))) >> (((max((var_1), (((/* implicit */unsigned int) (short)-6164)))) - (4294961106U)))));
                arr_25 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (arr_10 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2 + 1] [i_2 + 1] [i_5 - 1]))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2 + 1] [(signed char)7] [i_2]))) != (((unsigned long long int) var_10)))))));
                var_29 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [i_2])), (((long long int) arr_2 [i_5]))));
            }
        }
        for (unsigned short i_6 = 2; i_6 < 23; i_6 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) max((((/* implicit */short) min((arr_5 [i_0]), (arr_5 [i_0])))), (var_3)));
            arr_28 [i_0] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_6 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)21563))) : (arr_4 [i_0 + 1] [i_0 + 1]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_0 + 1] [i_6 - 2]))))));
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
            {
                var_31 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_6] [i_7])) ? (((((/* implicit */_Bool) (~(-449156914139831763LL)))) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) arr_5 [i_6])))) : (((/* implicit */int) ((var_11) >= (((/* implicit */unsigned int) min((-676901126), (arr_6 [i_0])))))))));
                var_32 = ((/* implicit */int) max((var_32), (min(((-(((/* implicit */int) arr_23 [i_6] [i_6] [22LL] [i_6 - 2])))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)-31415)), (arr_23 [i_6] [(unsigned short)14] [i_0] [i_6 - 1]))))))));
                var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (short)31401))));
                arr_33 [i_0] = ((/* implicit */_Bool) (-(449156914139831763LL)));
            }
            for (int i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
            {
                var_34 &= ((115272330U) - (((/* implicit */unsigned int) (~(((((/* implicit */int) var_16)) / (((/* implicit */int) var_15))))))));
                var_35 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(8192))), (((/* implicit */int) var_14))))) ? (((/* implicit */int) (!(var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                arr_37 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((long long int) (~(((/* implicit */int) var_10))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_36 = ((((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)3))))) ? (((((/* implicit */_Bool) 1240500876U)) ? (arr_36 [i_0 + 1] [i_0] [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                arr_40 [(short)6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [(_Bool)1] [i_6] [i_6] [i_9])) + (((/* implicit */int) var_16))))) ? ((+(-1))) : (((((/* implicit */_Bool) -1159198034)) ? (2093793675) : (((/* implicit */int) var_3)))))), (((/* implicit */int) var_4))));
                var_37 ^= ((/* implicit */signed char) max((((arr_36 [i_0 + 1] [i_6] [i_0 + 1]) << (((arr_36 [i_0 + 1] [i_6] [i_6]) - (13992974667343539434ULL))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_17 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-85))) : (arr_13 [i_0] [i_6] [i_9])))))));
            }
        }
    }
    for (unsigned char i_10 = 1; i_10 < 14; i_10 += 4) /* same iter space */
    {
        var_38 *= ((/* implicit */_Bool) (+(max((((/* implicit */int) var_12)), (arr_39 [9] [i_10 + 1] [i_10 - 1] [i_10 + 3])))));
        arr_43 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)7310)) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (((arr_14 [i_10 + 1] [i_10] [i_10 + 3]) + (((/* implicit */int) var_3)))))))) : (min((arr_15 [i_10] [i_10 + 3] [i_10]), (((/* implicit */long long int) var_15))))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 1; i_11 < 14; i_11 += 4) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned long long int) (+(((3460677771792987484LL) / (((/* implicit */long long int) -134765888))))));
        var_40 = ((/* implicit */short) var_4);
        arr_46 [i_11 + 2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_15)) + (2147483647))) >> (((arr_21 [i_11] [i_11]) - (5258512052662364418LL)))))) * ((+(17953270488034292338ULL)))));
        /* LoopSeq 1 */
        for (unsigned short i_12 = 0; i_12 < 17; i_12 += 4) 
        {
            arr_51 [i_12] = ((/* implicit */unsigned long long int) arr_18 [14] [i_12] [19]);
            var_41 = ((/* implicit */int) var_2);
            arr_52 [i_11 + 1] [i_11] = ((((/* implicit */long long int) ((-1) / (((/* implicit */int) var_10))))) / (arr_15 [i_11 - 1] [i_11 + 2] [i_11 - 1]));
            arr_53 [i_11] [i_12] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_23 [i_12] [i_11 - 1] [8LL] [i_11 + 2])) : (((/* implicit */int) arr_23 [i_12] [i_11 + 3] [i_12] [i_12]))));
        }
    }
}
