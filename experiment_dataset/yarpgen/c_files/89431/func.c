/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89431
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
    var_17 = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (var_5)))))), (((/* implicit */int) ((((10772446377620034735ULL) ^ (1050894127777235127ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5)))))))));
    var_18 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((unsigned short) var_9))), (((((/* implicit */_Bool) var_13)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (signed char)-50))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (971031887))) : ((-(((/* implicit */int) var_16)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_0))));
        arr_2 [i_0] = (~(((arr_0 [i_0 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (arr_1 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (signed char)-54))) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_7)) : (var_3))) : (((/* implicit */unsigned long long int) (+(var_8))))))));
        /* LoopSeq 4 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_1])) : (var_6))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_0))))))) / (min((((/* implicit */unsigned long long int) arr_4 [i_2] [i_1])), (8374418125580003082ULL)))));
            arr_8 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))) < (var_8))))))), (0U)));
            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_7 [i_1] [i_2] [i_2])))) ? (arr_7 [i_1] [i_2] [i_2]) : (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
        }
        for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            var_23 = ((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned short) var_14))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) var_3);
                        var_25 = ((/* implicit */short) arr_15 [i_3] [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1]);
                        arr_17 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) max((((/* implicit */signed char) var_14)), (var_0)))), (min((var_13), (((/* implicit */unsigned short) arr_4 [i_4] [i_4]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) var_12)), (arr_14 [i_5] [i_4] [i_3] [i_1])))) ? ((+(var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_4] [i_5])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                    }
                } 
            } 
            arr_18 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) arr_10 [i_3] [i_1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) max((var_15), (((/* implicit */unsigned short) var_9))))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_1])) ? (((/* implicit */int) arr_4 [i_3] [i_1])) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_3 - 1] [i_3] [i_1])))))));
        }
        for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            var_26 = ((/* implicit */short) (((~(((/* implicit */int) min((arr_4 [i_6] [i_1]), (var_11)))))) < (((/* implicit */int) (signed char)-54))));
            var_27 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_19 [i_1] [i_6])) ? (((/* implicit */int) arr_15 [i_1] [i_6] [i_1] [i_6] [i_6])) : (((/* implicit */int) arr_10 [i_1] [i_6])))), (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_10 [i_1] [i_1]))))));
            arr_21 [i_1] [i_6] = (!(((/* implicit */_Bool) max(((short)511), (((/* implicit */short) ((((/* implicit */_Bool) 491134414)) && (((/* implicit */_Bool) (unsigned char)251)))))))));
        }
        for (unsigned char i_7 = 1; i_7 < 20; i_7 += 1) 
        {
            arr_25 [i_7 + 3] [i_1] = arr_13 [i_7 - 1] [i_1] [i_7] [i_1];
            var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_6 [i_1] [i_7 + 3])))) ? (((((/* implicit */_Bool) arr_6 [i_7] [i_7 + 3])) ? (arr_6 [i_7] [i_7 + 3]) : (arr_6 [i_7 + 3] [i_7 + 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_16), (((/* implicit */unsigned short) arr_23 [i_7] [i_7 + 3]))))))));
            arr_26 [i_1] [i_7] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)49)))) + (((/* implicit */int) min((var_4), (var_1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (unsigned char)237))))) ? (((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) arr_16 [i_7] [i_7] [i_7] [i_1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_20 [i_1])))))) : ((((!(((/* implicit */_Bool) arr_13 [i_7] [i_7 + 3] [i_1] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_1] [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_15)))))))));
            arr_27 [i_1] [i_1] [i_1] = ((/* implicit */short) var_8);
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1435859542370284335LL)) ? (((/* implicit */unsigned long long int) 0U)) : ((((-(var_3))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_7 + 2])))))));
        }
    }
    for (unsigned char i_8 = 2; i_8 < 15; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned int) max((var_7), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_10 [i_9] [i_10]))))))));
                    arr_37 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((arr_34 [i_8] [i_8] [i_8 - 2]) ? (((/* implicit */int) arr_34 [i_8] [i_8] [i_8 + 1])) : (((/* implicit */int) var_1)))) & ((-(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_13 [i_9] [i_9] [i_9] [i_9]))))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            arr_40 [i_8] [i_8] [i_11] = ((/* implicit */signed char) max((arr_6 [i_8] [i_8]), (((/* implicit */unsigned int) (short)32767))));
            var_31 = ((/* implicit */_Bool) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) : (((unsigned int) var_8))));
        }
        for (short i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            var_32 = ((/* implicit */long long int) arr_29 [i_8]);
            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)35483))) > ((-9223372036854775807LL - 1LL)))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_28 [i_8] [i_12])) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_36 [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1]))))) : (arr_7 [i_8] [i_8] [i_12])));
        }
        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                for (unsigned char i_15 = 1; i_15 < 15; i_15 += 3) 
                {
                    {
                        var_34 &= ((/* implicit */long long int) max((((((_Bool) var_4)) ? (max((((/* implicit */unsigned int) arr_10 [i_8] [i_8])), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) var_1))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) var_2))))) / (9223372036854775807LL)));
                    }
                } 
            } 
            var_36 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) max(((unsigned short)45709), (((/* implicit */unsigned short) (unsigned char)22))))) < (((/* implicit */int) (_Bool)1)))))));
        }
        for (long long int i_16 = 1; i_16 < 13; i_16 += 1) 
        {
            arr_55 [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
            /* LoopNest 2 */
            for (unsigned short i_17 = 2; i_17 < 12; i_17 += 1) 
            {
                for (short i_18 = 0; i_18 < 16; i_18 += 1) 
                {
                    {
                        var_37 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) 9U)) : (max((-9223372036854775784LL), (var_7)))))));
                        var_38 = ((/* implicit */unsigned short) (-(max((6102492815189827939ULL), (7357442093335476608ULL)))));
                        arr_61 [i_18] [i_8] [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_41 [i_8] [i_8] [i_8]))))) == (min((var_5), (((/* implicit */unsigned int) arr_51 [i_8] [i_8] [i_8] [i_8 - 2] [i_17 + 4] [i_17]))))));
                        arr_62 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_30 [i_8]) ? (((/* implicit */int) arr_52 [i_8] [i_8] [i_18])) : (((/* implicit */int) (unsigned char)4))))) ^ (min((((/* implicit */unsigned long long int) var_9)), (var_6)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_17]))) >= (var_7)))) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) arr_59 [i_8] [i_8] [i_8 + 1] [i_17])) ? (max((((/* implicit */unsigned long long int) arr_38 [i_8] [i_16] [i_8])), (arr_29 [i_8]))) : (((/* implicit */unsigned long long int) ((long long int) var_6)))))));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_33 [i_8] [i_8] [i_16])), (arr_29 [i_8]))) > (8374418125580003082ULL))))));
        }
    }
}
