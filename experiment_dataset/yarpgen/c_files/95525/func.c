/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95525
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
    var_13 &= ((/* implicit */signed char) var_0);
    var_14 = ((/* implicit */unsigned short) max((-1255520263), (((((/* implicit */_Bool) max(((short)-8156), ((short)21304)))) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_1))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+((-(2147483637))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((~(max((3), (((/* implicit */int) (unsigned short)32767)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) <= (((long long int) 2130870830U)))))));
        var_16 &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (var_8)))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_17 = ((/* implicit */short) var_7);
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */int) max((-6440031023615602375LL), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) arr_4 [i_1]))))) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 3; i_3 < 13; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        {
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_4] [i_5 - 2] = ((/* implicit */int) arr_14 [i_2] [(_Bool)1] [i_5]);
                            arr_21 [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_2] [i_2])) <= (1003114744))))));
                            var_18 = ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) 794655505)), (max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-20047)) % (var_3)))), (((2772595639U) << (((((/* implicit */int) (unsigned short)45880)) - (45869)))))))));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1041353142) / (((/* implicit */int) (unsigned char)81))))) ? (((((/* implicit */_Bool) 1393027978U)) ? (5058070096365093799LL) : (((/* implicit */long long int) 3565609657U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) arr_9 [i_0] [i_2])))))))) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))) <= (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)21113))) / (5629402824229475907LL))))))));
            var_21 *= ((/* implicit */_Bool) max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */int) (short)-21304)), (-1003114757)))), (-5629402824229475907LL))))));
        }
        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
        {
            var_22 += ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (~(-1)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_11 [6U] [(signed char)2] [(unsigned short)6] [i_6])) ? (var_3) : (((/* implicit */int) (short)0)))))));
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-20047)) : (((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) (signed char)118)), ((unsigned short)44439))))))))));
            arr_26 [i_0] [i_6] [i_6] &= ((/* implicit */unsigned int) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))));
            /* LoopNest 3 */
            for (signed char i_7 = 3; i_7 < 13; i_7 += 2) 
            {
                for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_30 [i_9] [i_8] [i_7] [i_6] [i_0]))));
                            var_25 = ((/* implicit */short) (unsigned short)28969);
                            arr_37 [i_9] [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_9 [i_6] [i_7]);
                            var_26 = ((((arr_14 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_9])) : (((/* implicit */int) arr_14 [i_0] [i_6] [i_7 + 1])))) <= (((/* implicit */int) min((arr_14 [i_9 - 2] [i_7 + 2] [i_9]), (arr_14 [i_9 - 1] [i_7 - 2] [i_7])))));
                            arr_38 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)3)), (3754448397406885990ULL)));
                        }
                    } 
                } 
            } 
        }
        for (int i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (((~(((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)21290)))))) <= ((~(((/* implicit */int) arr_7 [i_10] [i_10] [i_10])))))))));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned short i_12 = 2; i_12 < 14; i_12 += 4) 
                {
                    {
                        arr_45 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_11] [i_10] [i_11] [(unsigned short)0] [i_12 - 2] [i_11])) ? (((((/* implicit */_Bool) ((17356798232528370739ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-155)))))) ? (((/* implicit */unsigned long long int) (-(var_3)))) : (min((2444088702614729549ULL), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        var_28 *= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_11]))) % ((~(3754448397406885990ULL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0])) ? (((/* implicit */int) (short)-1225)) : (((/* implicit */int) arr_44 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_10] [i_11] [i_12 + 1] [i_10]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_32 [i_0] [i_0] [1] [i_0]))))))));
                    }
                } 
            } 
            var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1385173143U)) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) (unsigned char)42))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163))) : ((~(14692295676302665634ULL))));
            arr_46 [2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) (signed char)-78)))) : (((/* implicit */int) var_7))));
        }
    }
    for (int i_13 = 2; i_13 < 17; i_13 += 4) 
    {
        var_30 += ((/* implicit */unsigned long long int) min((((-976655692084584608LL) + (((/* implicit */long long int) ((int) (_Bool)0))))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-2704)))))));
        arr_49 [i_13] = ((/* implicit */signed char) max((min((1325285024), (((/* implicit */int) arr_47 [i_13 + 2])))), (((/* implicit */int) arr_47 [i_13 + 2]))));
        arr_50 [i_13] = ((((/* implicit */int) arr_47 [i_13 + 3])) << (((((/* implicit */int) max((arr_47 [i_13 + 3]), (arr_47 [i_13 + 3])))) - (9406))));
        arr_51 [i_13] = ((/* implicit */short) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) ((unsigned long long int) arr_48 [i_13]))) ? (((((/* implicit */int) (unsigned char)166)) - (((/* implicit */int) (signed char)-18)))) : (((/* implicit */int) arr_47 [i_13]))))));
    }
    var_31 = ((/* implicit */long long int) var_7);
    var_32 = ((/* implicit */short) (unsigned char)74);
}
