/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58633
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_12 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)47798)) ? (2097136U) : (((/* implicit */unsigned int) -1733625227))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_13 ^= ((/* implicit */unsigned short) (~(((int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47798))) ^ (var_2))))));
                        arr_12 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) 844270515U)) + (((unsigned long long int) var_0)))), (((max((var_7), (((/* implicit */unsigned long long int) var_8)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_6))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 3; i_5 < 13; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (unsigned short)58043))));
                        var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))));
                        var_17 = ((/* implicit */unsigned short) ((signed char) (unsigned char)75));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) var_10))));
        /* LoopSeq 1 */
        for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
        {
            var_19 = ((/* implicit */_Bool) ((unsigned long long int) var_9));
            /* LoopNest 2 */
            for (int i_9 = 4; i_9 < 11; i_9 += 3) 
            {
                for (signed char i_10 = 4; i_10 < 13; i_10 += 2) 
                {
                    {
                        arr_34 [i_4] [i_4] [(unsigned char)7] [i_4] [i_9] [i_10 - 4] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)17721))));
                        var_20 -= ((unsigned short) -4);
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) ((((var_8) + (2147483647))) >> (((((/* implicit */int) (short)29083)) - (29068)))));
            var_22 = ((/* implicit */int) ((var_7) & (var_3)));
        }
    }
    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
    {
        /* LoopSeq 4 */
        for (short i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)17738)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8479))) : (0U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9))))))) ? (((((/* implicit */_Bool) ((short) 2147483647))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_7))) : (((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (0U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))))))));
            arr_40 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) 3916288800U))) << (((((/* implicit */int) (unsigned short)17737)) - (17733)))));
        }
        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
        {
            arr_45 [8ULL] [i_13] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)47792)) ^ (-902606900)))), (((((/* implicit */_Bool) ((int) (unsigned char)143))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_1))))) : (((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18586)))))))));
            arr_46 [i_11] [i_13] [i_13] = ((/* implicit */_Bool) max((((int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (637513658U) : (((/* implicit */unsigned int) -922160585))))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)94)) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)17737))))))))));
            arr_47 [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)109)), (var_5)))))))));
        }
        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
        {
            var_24 += ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) var_11)))));
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (var_7)));
        }
        /* vectorizable */
        for (unsigned char i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
        {
            var_26 -= ((/* implicit */unsigned int) var_6);
            arr_54 [i_11] [i_15] = ((/* implicit */unsigned int) (((-(12214514033552612604ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
            arr_55 [10ULL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_2)));
        }
        arr_56 [i_11] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 3657453629U)), (((unsigned long long int) 3657453619U))));
        var_27 -= ((/* implicit */int) ((((var_7) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (unsigned short)65535))))))) > (((/* implicit */unsigned long long int) min((((unsigned int) (unsigned char)255)), (((/* implicit */unsigned int) 1047552)))))));
        var_28 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 637513658U)), (var_9)));
        arr_57 [i_11] [i_11] = ((/* implicit */unsigned int) ((int) var_2));
    }
    for (unsigned char i_16 = 1; i_16 < 20; i_16 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_17 = 2; i_17 < 20; i_17 += 3) 
        {
            var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */int) var_1)) : (-2011509227)));
            arr_65 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6180031048897602776ULL)) ? (var_8) : (((/* implicit */int) (unsigned char)15))))) ? (((/* implicit */int) var_10)) : (((int) var_5))));
        }
        /* vectorizable */
        for (unsigned short i_18 = 0; i_18 < 22; i_18 += 4) 
        {
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((_Bool) var_8)))));
            arr_70 [i_16] [i_16] [i_18] = ((/* implicit */unsigned char) (-(var_0)));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 2) 
        {
            for (unsigned long long int i_20 = 2; i_20 < 20; i_20 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) (short)-1)), ((unsigned short)17738))))));
                    var_32 = ((/* implicit */_Bool) max((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8730915130291091631ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((unsigned char) 5055925070180128714ULL)))))));
                    var_33 = ((/* implicit */unsigned char) ((((unsigned long long int) (unsigned char)190)) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(-2147483647))))))))));
                }
            } 
        } 
    }
    var_34 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8070450532247928832ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_7)))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105))))) : (((/* implicit */unsigned long long int) var_8)))) >> (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)255)))))))));
}
