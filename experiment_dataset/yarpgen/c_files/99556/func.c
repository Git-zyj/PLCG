/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99556
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) 15852138850390657085ULL);
                var_18 += ((/* implicit */signed char) (unsigned short)26092);
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) 1073741823)) : (2830218359126216153LL)))) & ((((~(var_4))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 2] [i_3 + 1] [i_0 + 2] [i_3 - 1] [i_3] [i_2]))) != (4620957096601701084ULL))))))));
                        }
                    } 
                } 
                var_21 *= ((/* implicit */signed char) -174762773);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (short i_5 = 3; i_5 < 7; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (~((+(arr_15 [i_5] [i_5 + 3])))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4]))) : (((long long int) ((((/* implicit */int) (short)0)) > (((/* implicit */int) arr_1 [i_4])))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((short) (short)8360)), (((/* implicit */short) ((((/* implicit */int) (signed char)-99)) >= (869553078))))))) != (-1)));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) (signed char)51))), (max((((/* implicit */int) (unsigned short)7677)), (-352774151)))))) % (((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? (((2594605223318894531ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)35095)) == (((/* implicit */int) (unsigned char)17)))))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 3; i_8 < 7; i_8 += 2) 
            {
                for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((9895568) & (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((var_8) | (((/* implicit */long long int) 1905411213U))))) : (((unsigned long long int) -174762773))));
                        var_27 = ((/* implicit */int) ((((unsigned int) (signed char)99)) <= (((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) : (18U)))));
                    }
                } 
            } 
            var_28 = ((/* implicit */long long int) 15852138850390657085ULL);
        }
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                {
                    var_29 = ((/* implicit */short) arr_28 [i_4] [i_4] [i_10] [i_10] [i_11] [i_11]);
                    var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((max((-7688231487797980884LL), (((/* implicit */long long int) var_6)))) < (((/* implicit */long long int) ((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43601))) : (((long long int) 1))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_12 = 3; i_12 < 11; i_12 += 2) 
    {
        var_31 = ((/* implicit */unsigned char) var_6);
        arr_36 [i_12] = ((/* implicit */int) (unsigned short)21490);
        /* LoopNest 2 */
        for (unsigned int i_13 = 1; i_13 < 10; i_13 += 2) 
        {
            for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                {
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)21490))) - (584617355801781213LL)));
                    var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((-1) - (var_9))))));
                    var_34 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_12 + 1])) | (var_9)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        for (int i_16 = 0; i_16 < 13; i_16 += 4) 
                        {
                            {
                                var_35 &= ((/* implicit */unsigned short) ((arr_8 [i_12] [i_16] [i_16] [i_12]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_1 [i_12]))))))));
                                var_36 = ((/* implicit */int) -9196320077026871528LL);
                                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_12 - 1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -9196320077026871528LL)) >= (var_7)))) : (((/* implicit */int) ((var_8) > (((/* implicit */long long int) 36U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
    {
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)8968)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_3 [i_17]))))))) : (4294967277U)));
        arr_54 [i_17] = ((/* implicit */int) ((unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21504))) & (var_7))))));
        var_39 -= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170))) : ((~(119148567U))))));
        arr_55 [i_17] [i_17] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18095)) ? (((/* implicit */long long int) -1548787917)) : (-1957623257062629832LL)))) ? (3236673352584683494LL) : (((/* implicit */long long int) ((4294967236U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51)))))))));
    }
}
