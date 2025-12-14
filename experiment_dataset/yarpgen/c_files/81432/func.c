/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81432
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
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_2] = ((/* implicit */int) arr_5 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_2]);
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+(arr_0 [i_2]))))));
                    arr_7 [(unsigned short)15] [i_1] [i_2] = ((((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (signed char)-63))))) * (((/* implicit */int) arr_1 [i_0] [i_0 + 2])));
                    arr_8 [i_2] = ((/* implicit */int) ((((/* implicit */int) ((signed char) ((var_15) < (var_10))))) >= (((((/* implicit */_Bool) var_13)) ? (arr_2 [i_0 - 3] [i_0 - 3] [i_0 - 1]) : (((/* implicit */int) (signed char)-63))))));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_18))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)46)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)150)))) : (min((((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 - 2])), (11666666959189343927ULL)))))));
        var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)255)) && ((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((unsigned char)74), (((/* implicit */unsigned char) var_13)))))))) && ((!(((/* implicit */_Bool) min((arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]), (((/* implicit */long long int) var_4)))))))));
        var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((var_6) ? (((arr_1 [i_0 - 1] [i_0]) ? (4326071653046566841LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-63))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-30)) * (((/* implicit */int) var_18)))))))), (var_11)));
    }
    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_24 |= var_17;
        /* LoopSeq 4 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_3 [i_3] [i_4])) : (((/* implicit */int) var_12))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    {
                        arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] = min((arr_2 [i_3] [i_3] [i_3]), (min((((/* implicit */int) min((var_18), (arr_10 [i_3] [i_4])))), ((+(((/* implicit */int) var_2)))))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [(unsigned char)5] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_6] [i_4]))))) : (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-354860084795791209LL)))))) ? (((unsigned long long int) max(((short)0), (((/* implicit */short) arr_10 [i_3] [i_6]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
                    }
                } 
            } 
            arr_20 [2ULL] |= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) var_4)) >= (2147483647)))), (((int) min((((/* implicit */int) var_1)), (2147483621))))));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (_Bool)1))));
            arr_24 [i_3] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)255))));
        }
        for (long long int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_17)), (var_12))))) < (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (-4376352939970621892LL)))))))))));
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                var_29 ^= ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) -1555937771)), (4166783378013281179LL))) >= (((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)46)))))))));
                var_30 &= ((/* implicit */long long int) ((int) (signed char)-32));
            }
        }
        for (long long int i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
        {
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_10] [i_10] [i_3])) ? (arr_2 [(unsigned char)20] [i_10] [i_10]) : (arr_2 [i_10] [i_10] [i_3])))) ? (((/* implicit */int) var_12)) : ((+(arr_2 [(unsigned char)8] [i_10] [i_3])))));
            var_32 = ((/* implicit */signed char) var_7);
            /* LoopNest 3 */
            for (long long int i_11 = 2; i_11 < 13; i_11 += 3) 
            {
                for (unsigned char i_12 = 3; i_12 < 14; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_11 + 1] [(unsigned short)20] [i_3])) ? (arr_4 [i_11 - 1] [(unsigned short)22] [i_11 + 2]) : (((/* implicit */unsigned long long int) var_10))))) ? ((~(((/* implicit */int) (unsigned char)191)))) : (((((/* implicit */int) (signed char)18)) / (arr_9 [i_12 - 1]))))))));
                            arr_43 [i_3] [i_3] [8ULL] [10LL] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_36 [i_13] [i_3] [i_3]))))), (((((/* implicit */_Bool) arr_5 [i_3] [i_11 - 2] [i_12 + 1] [i_13])) ? (((/* implicit */long long int) arr_40 [i_3] [i_3])) : (var_15)))))) ? (min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) var_8)) * (((/* implicit */int) var_5)))))) : (max((((/* implicit */int) (unsigned char)255)), (arr_0 [i_12 - 1])))));
                            arr_44 [i_3] [i_12 - 2] [0LL] [i_12 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)12546))))) ? ((~(((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_27 [i_10]))))))));
                        }
                    } 
                } 
            } 
        }
        var_34 *= (_Bool)1;
    }
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                var_35 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)254))))));
                var_36 = ((/* implicit */int) min((var_36), (((((((/* implicit */_Bool) arr_45 [i_14])) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (signed char)-55)) * (((/* implicit */int) var_7)))))) * (((/* implicit */int) (unsigned char)0))))));
                arr_49 [i_14] [(signed char)10] [i_15] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_17) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) arr_0 [(unsigned char)22]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_3)))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) var_13))))), ((~(var_10)))))));
            }
        } 
    } 
}
