/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61370
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
    var_12 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */_Bool) max((var_13), (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_0] [i_2] [i_0] [i_2] [i_1 + 1] [i_2]), ((unsigned char)38))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (13424018739729038ULL)))))) >= (((((/* implicit */int) arr_7 [i_1 - 4] [i_1 - 4] [i_1 - 3] [(_Bool)1] [i_1 - 3])) >> (((((/* implicit */int) arr_7 [i_1 - 4] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1])) - (108)))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            arr_13 [i_0] [(unsigned short)10] [i_1] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))));
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) * (arr_9 [i_0] [i_0] [i_3] [i_4])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1 - 1] [i_3] [i_3]))))) : (((((/* implicit */_Bool) (unsigned char)229)) ? (8544309008017715867ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))) * ((+(arr_4 [i_0] [i_0])))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)108))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))) : (min((((/* implicit */unsigned long long int) -3406160052411560558LL)), (9902435065691835749ULL)))))));
                        }
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                        {
                            arr_18 [i_2] [i_1 - 2] [i_1] [i_2] [i_1] [i_5] |= ((/* implicit */unsigned char) var_8);
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_3])) ? (min((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))), (-3406160052411560558LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1 - 3] [i_0] [i_0 + 2] [(unsigned short)13])) && (((/* implicit */_Bool) arr_16 [i_0 - 2] [i_1 - 3]))))))));
                            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_9))))));
                        }
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            var_17 = (~((-(((/* implicit */int) arr_1 [i_3] [i_0])))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_6)) < (var_3))))))) ? (((/* implicit */unsigned long long int) var_1)) : (((max((9902435065691835748ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_11))))))));
                            var_19 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 2])))))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_1] [i_3] [i_3])) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (3406160052411560558LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) * (((((/* implicit */_Bool) (unsigned short)55661)) ? (8961675566564667367ULL) : (((/* implicit */unsigned long long int) 3406160052411560565LL)))))) : (((/* implicit */unsigned long long int) var_8)))))));
                            var_21 += ((/* implicit */unsigned short) arr_14 [i_0] [i_1 + 1] [i_7 + 1] [i_7] [i_0]);
                        }
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((var_1) > (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
        var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((-3406160052411560562LL) == (arr_0 [(_Bool)1])))) & (((/* implicit */int) var_4))));
        var_24 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_0 [i_0]))))))), (var_11));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 4; i_8 < 12; i_8 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            arr_30 [i_8] [i_9] [7] |= ((/* implicit */short) 0LL);
            var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)54115)) ^ (((((/* implicit */int) arr_5 [i_9])) ^ (((/* implicit */int) (unsigned short)23184))))));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_23 [i_8] [(signed char)9] [i_8 + 3] [i_8 - 1] [i_8])) : (((/* implicit */int) arr_23 [i_8] [i_8 + 3] [i_9] [i_9] [i_9]))));
            var_27 *= ((/* implicit */signed char) 1073741823);
        }
        for (unsigned short i_10 = 1; i_10 < 12; i_10 += 4) 
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                for (signed char i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    for (int i_13 = 3; i_13 < 13; i_13 += 1) 
                    {
                        {
                            var_28 &= ((/* implicit */signed char) (~(((/* implicit */int) arr_11 [i_8] [i_8] [i_11] [i_11]))));
                            arr_40 [i_8 - 2] [i_10 - 1] [i_8 - 2] [i_10] [i_13 - 1] [i_10 + 3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_8 - 1])) || (((/* implicit */_Bool) arr_11 [i_8 - 2] [i_10] [i_10 + 3] [i_8 - 2]))));
                        }
                    } 
                } 
            } 
            arr_41 [i_8 - 1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(214076557160528643ULL)))) ? (((36028797018963967LL) % (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 2) 
        {
            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)112))));
            var_30 = ((/* implicit */short) ((arr_39 [i_14]) | (-18LL)));
            var_31 += ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_14]))));
        }
        arr_45 [i_8 - 3] [i_8 - 3] = ((/* implicit */short) 2251799813668864ULL);
        arr_46 [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) -983127115)) : (214076557160528643ULL))))));
    }
}
